package main

import "fmt"

func main() {
	
	var nome string
	var sal, com, total float64

	fmt.Scanf("%s", &nome)
	fmt.Scanf("%f", &sal)
	fmt.Scanf("%f", &com)

	total = sal + (com * 0.15)

	fmt.Printf("TOTAL = R$ %.2f\n", total)
}

