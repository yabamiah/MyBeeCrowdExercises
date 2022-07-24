// Sequencia IJ 1 - 1095
// @author: Yabamiah
package main

import (
	"fmt"
	"os"
)

func main() { 
	
	var I, J int = 1, 60

	for {
		fmt.Printf("I=%d J=%d\n", I, J)
		J -= 5
		I += 3

		if (J < 0) {
			os.Exit(0)
		}
	}

	fmt.Println(J)
}
