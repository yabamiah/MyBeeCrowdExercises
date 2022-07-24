#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

/* valor_coluna retorna um inteiro formado pela coluna x da matriz a.
O valor esperado para a primeira coluna do primeiro exemplo no beecrowd é 4932.
*/

int valor_coluna(char a[][83], int x)
{
    char v[5];

// para extrair o numero representado na coluna desejada, foi criado uma string
// que recebe os justamente os numeros da coluna.

    for(int i = 0; i < 4; i++)
    {
        v[i] = a[i][x];
    }
    
//a funçao atoi transforma uma string em um inteiro, retornando, nesse caso, o inteiro
// representado na coluna selecionda da matriz a.

    return atoi(v);
}
 
int main()
{

//ciraçao da matriz 'a' e dos parametros L e F. Perceba que 'a' é declarada com 83 colunas,
//pois este é o valor máximo de colunas informado na questao (mais o zero terminador).

     char a[4][83];
     int L, F;
     
     for(int i = 0; i < 4; i++)
     {

//entenda, aqui, a matriz 'a' como uma lista de n nomes, cada nome com no máximo 82 (por conta do terminador 0) 
//caracteres, no formato a[n] = {"nome_1", "nome_2", ... , "nome_n"}.
//Ao escanear a[i], estamos, na prática, escaneando estes nomes. Perceba, também, que esses
//nomes, nesta questão, são na verdade numeros representados nas linhas da matriz.

         scanf("%s", a[i]);
     }
     
//Aqui, c representa a quantidade de colunas presentes na matriz, sendo obtido "medindo"
//uma linha arbritrária de 'a' com a strlen.

     int c = strlen(a[0]);
     
//L e F sao parametros exigidos pela questão. Eles representam os numeros representados na
//ultima e primeira colunas, respectivamente.

     L = valor_coluna(a, c-1);
     F = valor_coluna(a, 0);

//O laço seguinte serve para decodificar os caracteres da matriz. Como, daqui para frente,
//as colunas relevantes estao entre a primeira e a ultima (estas nao inclusas), esse foi o 
//intervado escolhido para análise.

     for(int i = 1; i < c - 1; i++)
     {

// M também é parametro da questão. Ele representa o numero formado por qualquer 
//outra coluna da matriz.

        int M = valor_coluna(a, i);

//A expressão (F * M + L)%257 é dada pela questao para que sejam decodificados os caracteres
//da string que será formada. Note que usar um inteiro como argumento do printf para caracter 
//resulta no caracter representado por esse numero na tabela ASCII.

        printf("%c", (F*M + L)%257);
     }
     
     printf("\n");

//nunca se esqueça da quebra de linha.

     return 0;
}

//Considero essa questão como sendo difícil. Espero que tenham entendido e boa prova ;)