// Cara ou Coroa - 1329
// @author: Yabamiah
package main

import (
	"fmt"
)

func main() {

	var x, moeda int
	var m, j int = 0, 0

	for {
		fmt.Scanf("%d", &x)
		if (x == 0) {
			break
		}
		for y:= 0; y < x; y++ {

			fmt.Scanf("%d", &moeda)

			if (moeda == 0) {
				m++
			} else {
				j++
			}
		}
		fmt.Printf("Mary won %d times and John won %d times\n", m, j)
		m = 0
		j = 0
	}

}
