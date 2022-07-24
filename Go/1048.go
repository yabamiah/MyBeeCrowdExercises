// Aumento de Salário - 1048
// @author: Yabamiah
package main

import "fmt"

func main() {

	var sl, rj float64

	fmt.Scanf("%f", &sl)

	if (sl <= 400.00) {
		rj = sl * (15.0/100)
		fmt.Printf("Novo salario: %.2f\n", sl + rj)
		fmt.Printf("Reajuste ganho: %.2f\n", rj)
		fmt.Println("Em percentual: 15 %")
	} else if (sl > 400.00 && sl <= 800.00) {
		rj = sl * (12.0/100)
		fmt.Printf("Novo salario: %.2f\n", sl + rj)
		fmt.Printf("Reajuste ganho: %.2f\n", rj)
		fmt.Println("Em percentual: 12 %")
	}  else if (sl > 800.00 && sl <= 1200.00) {
		rj = sl * (10.0/100)
		fmt.Printf("Novo salario: %.2f\n", sl + rj)
		fmt.Printf("Reajuste ganho: %.2f\n", rj)
		fmt.Println("Em percentual: 10 %")
	}   else if (sl > 1200.00 && sl <= 2000.00) {
		rj = sl * (7.0/100)
		fmt.Printf("Novo salario: %.2f\n", sl + rj)
		fmt.Printf("Reajuste ganho: %.2f\n", rj)
		fmt.Println("Em percentual: 7 %")
	}   else if (sl > 2000.00) {
		rj = sl * (4.0/100)
		fmt.Printf("Novo salario: %.2f\n", sl + rj)
		fmt.Printf("Reajuste ganho: %.2f\n", rj)
		fmt.Println("Em percentual: 4 %")
	}  

}
