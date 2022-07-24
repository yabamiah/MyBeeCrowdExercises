//Grid de largada - 1228
// @author: Yabamiah
package main

import "fmt"

func main() {

	var cs int

	fmt.Scanf("%d", &cs)

	larg:= new([]int)
		chg:= new([]int)

	for i:= 0; i < cs; i++ {
		fmt.Scanf("%d", &larg[i])
		fmt.Scanf("%d", &chg[i])
	}

	for i:= 0; i < cs; i++ {
		fmt.Printf("Largada = %d\n", larg[i])
		fmt.Printf("Chegada = %d\n", chg[i])
	}
}
