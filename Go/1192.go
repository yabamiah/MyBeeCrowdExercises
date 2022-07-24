// O jogo Matemático de Paula
// @auhor: Yabamiah
package main

import (
	"fmt"
	"unicode"
)

func main() {

	var let rune
	var n1, n2, x int

	fmt.Scanf("%d", &x)

	for y:= 0; y < x; y++ {

		fmt.Scanf("%d%c%d", &n2, &let, &n1)

		if (n1 == n2) {
			fmt.Println(n1*n2)
		} else if (let == unicode.ToLower(let)) {		
			fmt.Println(n1+n2)
		} else {
			fmt.Println(n1 - n2)
		}

	}
}
