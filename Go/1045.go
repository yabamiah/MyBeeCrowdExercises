// 1045 - Tipos de Triangulos
// @author: Yabamiah

package main

import (
	"fmt"
	"os"
)

func main() {
	
	var A, B, C, temp float64

	fmt.Scanf("%f", &A)
	fmt.Scanf("%f", &B)
	fmt.Scanf("%f", &C)

	if (B > A && B > C) {
		temp = A
		A = B
		B = temp
	} else if (C > A && C > B) {
		temp = A
		A = C
		C = temp
	}

	if (C > B) {
		temp = B
		B = C
		C = temp
	}

	// Classificacao

	if (A >= B + C) {
		fmt.Println("NAO FORMA TRIANGULO")
		os.Exit(0)
	} 

	if ( (A*A) == (B*B) + (C*C) ) {
		fmt.Println("TRIANGULO RETANGULO")
	} 

	if ( (A*A) > (B*B) + (C*C) ) {
		fmt.Println("TRIANGULO OBTUSANGULO")
	}

	if ( (A*A) < (B*B) + (C*C) ) {
		fmt.Println("TRIANGULO ACUTANGULO")
	} 

	if (A == B && A == C) {
		fmt.Println("TRIANGULO EQUILATERO")
	} else if (A == B || A == C || B == C) {
		fmt.Println("TRIANGULO ISOSCELES")
	}
}
