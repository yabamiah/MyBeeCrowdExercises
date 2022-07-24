#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char sobrenome[256];
    char nome[256];
    char sobre[256];
    int nom;
    scanf("%s %s", &sobrenome, &nome);
    nom = strlen(sobrenome);
    strncpy(sobre, sobrenome, nom);

    strlwr(nome);
    strlwr(sobre);

    nome[0]=toupper(nome[0]);
    sobre[0]=toupper(sobre[0]);
    printf("%s, %s\n", nome, sobre);

 }
