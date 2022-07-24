package main

import (
	"fmt"
)

func main() {
	var num int

	var valor, hora, salario float64

	fmt.Scanf("%d", &num)
	fmt.Scanf("%f", &hora)
	fmt.Scanf("%f", &valor)

	salario = hora * valor

	fmt.Printf("NUMBER = %d\n", num)
	fmt.Printf("SALARY = U$ %.2f\n", salario)
}
