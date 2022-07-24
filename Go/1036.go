package main

import (
	"fmt"
	"math"
)

func main() {

	var a, b, c, r1, r2, delta float64

	fmt.Scanf("%f", &a)
	fmt.Scanf("%f", &b)
	fmt.Scanf("%f", &c)

	delta = (b * b) - (4.0 * a * c)

	r1 = (-b + math.Sqrt(delta) ) / (2.0 * a)
	r2 = (-b - math.Sqrt(delta) ) / (2.0 * a)

	if (a == 0 || delta < 0) {
		fmt.Println("Impossivel calcular")
	} else {
		fmt.Printf("R1 = %.5f\n", r1)
		fmt.Printf("R2 = %.5f\n", r2)
	}

}
