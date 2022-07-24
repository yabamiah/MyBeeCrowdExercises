package main

import "fmt"

func main() {
	
	var A, B, C float64
	
	fmt.Scanf("%f", &A)
	fmt.Scanf("%f", &B)
	fmt.Scanf("%f", &C)

	fmt.Printf("TRIANGULO: %.3f\n", (A * C)/2)
	fmt.Printf("CIRCULO: %.3f\n", C * C * 3.14159)	
	fmt.Printf("TRAPEZIO: %.3f\n", (A+B)*C/2)
	fmt.Printf("QUADRADO: %.3f\n", B * B)
	fmt.Printf("RETANGULO: %.3f\n", A * B)

}
