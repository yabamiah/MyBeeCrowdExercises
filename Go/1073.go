// Quadrado de Pares - 1073
// @author: Yabamiah
package main

import "fmt"

func main() {

	var N int

	fmt.Scanf("%d", &N)

	for i:= 1; i <= N; i++ {

		if (i % 2 == 0) {
			fmt.Printf("%d^2 = %d\n", i, i*i)
		}

	}

}
