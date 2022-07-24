package main

import "fmt"

func main() {

	var num, y int = 0, 0

	for x:= 0; x < 5; x++ {
		
		fmt.Scanf("%d", &num)

		if (num % 2 == 0) {
			y++
		}
	}

	fmt.Printf("%d valores pares\n", y)
}
