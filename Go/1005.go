package main

import (
	"fmt"
)

func main() {
	var nA, nB float64

	fmt.Scanf("%f", &nA)
	fmt.Scanf("%f", &nB)

	var media float64 = ((nA*3.5)+(nB*7.5))/11

	fmt.Printf("MEDIA = %.5f\n", media)
}
