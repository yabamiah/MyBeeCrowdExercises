// Hello Galaxy - 1515
// @author: Yabamiah
package main

import (
	"fmt"
	"os"
)

func main() {

	var Ncaso, Arec, Tdm int = 0, 0 ,0
	var Planet, Primeiro string
	
	var tempx, tempy int = 0, 10000


	for {
		fmt.Scanf("%d", &Ncaso)
		if (Ncaso == 0) {
			os.Exit(0)
		}
		for i:= 0; i < Ncaso; i++ {
		
			fmt.Scanf("%s", &Planet)
			fmt.Scanf("%d %d", &Arec, &Tdm)
			tempx = Arec - Tdm

			if (tempx < tempy) {
				tempy = tempx
				Primeiro = Planet
			}
		}
	fmt.Println(Primeiro)
	tempy = 10000
	}

}
