// 1046 - Tempo de jogo
// @author: Yabamiah
package main

import (
	"fmt"
)

func main() {

	var init, final, total int

	fmt.Scanf("%d", &init)
	fmt.Scanf("%d", &final)

	if (init == final) {
	 	fmt.Println("O JOGO DUROU 24 HORA(S)")
	}

	total = final - init

	if (total < 0) {
		total = 24 - (init + final)
	}

	fmt.Printf("O JOGO DUROU %d HORA(S)\n", total)

}
