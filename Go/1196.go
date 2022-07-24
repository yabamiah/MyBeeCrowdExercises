// WERTYU - 1196
// @author: Yabamiah
package main

import (
	"fmt"
)

func main() {
 
	var nome string
	var addr, md, x float64 = 0.0, 0.0, 0.0

	for i:=1; i <= 3; i++ {
		fmt.Scanf("%s", &nome)
		fmt.Scanf("%d", &addr)
		md += addr
		x++
	}
	fmt.Printf("%f\n", md/x)
}

