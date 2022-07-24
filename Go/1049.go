// Animal - 1049
// @author: Yabamiah
package main

import "fmt"

func main() {
	var coluna, grupo, aliment string

	fmt.Scanf("%s", &coluna)
	fmt.Scanf("%s", &grupo)
	fmt.Scanf("%s", &aliment)

	if (coluna == "vertebrado") {
		if (grupo == "ave") {
			if (aliment == "carnivoro") {
				fmt.Println("aguia")
			} else {
				fmt.Println("pomba")
			}
		} else {
			if (aliment == "onivoro") {
				fmt.Println("homem")
			} else {
				fmt.Println("vaca")
			}
		}
	} else {
		if (grupo == "inseto") {
			if (aliment == "hematofago") {
				fmt.Println("pulga")
			} else {
				fmt.Println("lagarta")
			}
		} else {
			if (aliment == "hematofago") {
				fmt.Println("sanguessuga")
			} else {
				fmt.Println("minhoca")
			}
		}
	}

}
