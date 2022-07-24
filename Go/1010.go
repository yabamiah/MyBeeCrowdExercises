package main

import (
	"fmt"
)

func main() {
	
	var cod int
	var qtd, din, total float64

	for i := 0; i < 2; i++ {
		fmt.Scanf("%d", &cod) 
		fmt.Scanf("%f", &qtd)
		fmt.Scanf("%f", &din)
	
		total += qtd * din

	}

	fmt.Printf("VALOR A PAGAR: R$ %.2f\n", total)
}
