// Fibonacci Fácil - 1151
// @author: Yabamiah
package main

import "fmt"

func main() {
	
	var a, b, c int = 0, 1, 0
	var j int

	fmt.Scanf("%d", &j)
	
	for i:= 1; i < j; i++ {

		if (i % 2 == 1) {
			fmt.Println(c)
			c = a + b
			a = c
		} else if (i == 2) {
			fmt.Println(c)
		} else if (i % 2 == 0) {
			fmt.Println(c)
			c = a + b
			b = c
		}
	}
	fmt.Println(c)
}
