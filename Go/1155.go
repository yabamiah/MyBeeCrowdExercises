// Sequência S - 1155
// @author: Yabamiah
package main

import "fmt"

func main() {

	var s, x float64

	for x = 1; x <= 100; x++ {

		s += 1.0/x
	}
	fmt.Printf("%.2f\n", s)
}
