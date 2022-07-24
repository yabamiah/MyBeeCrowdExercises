// 1047 - Tempo de jogo com minutos
// @author: Yabamiah

package main

import (
	"fmt"
	"os"
)

func main() {

	var Hi, Mi, Hf, Mf, Ht, Mt int

	fmt.Scanf("%d", &Hi)
	fmt.Scanf("%d", &Mi)
	fmt.Scanf("%d", &Hf)
	fmt.Scanf("%d", &Mf)

	if (Hi == Hf && Mi == Mf) {
		fmt.Println("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)")
		os.Exit(0)
	}

	//Horas
	Ht = Hf - Hi

	//Minutos
	Mt = Mf - Mi

	if (Mt < 0) {
		Mt += 60
		Ht --
	}

	if (Ht < 0) {
		Ht += 24
	}

	fmt.Printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", Ht, Mt)

}
