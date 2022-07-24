package main

import "fmt"

func main() {

	var temp, vel, l float64

	fmt.Scanf("%f", &temp)
	fmt.Scanf("%f", &vel)

	l = (temp * vel) / 12

	fmt.Printf("%.3f\n", l)
}
