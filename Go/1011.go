package main

import (
	"fmt"
	"math"
)

func main() {
	
	const pi = 3.14159
	var R, V float64

	fmt.Scanf("%f", &R)

	V = (4.0/3) * pi * math.Pow(R, 3)

	fmt.Printf("VOLUME = %.3f\n", V)
}
