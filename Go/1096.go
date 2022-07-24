// Sequemcia IJ 2 - 1096
// @author: Yabamiah
package main

import "fmt"

func main() {

	var I, J int = 1, 8

	for (I <= 9) {
		J--;
		fmt.Printf("I=%d J=%d\n", I, J)

		if (J <= 5) {
			J += 3
			I += 2
		}
	}
}
