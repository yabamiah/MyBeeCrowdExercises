package main

import (
	"fmt"
	"math"
)

func main() {

	var a, b, c, dist1, dist2 float64

	fmt.Scanf("%f", &a)
	fmt.Scanf("%f", &b)
	fmt.Scanf("%f", &c)

	dist1 = (a + b + math.Abs((a - b))) / 2
	dist2 = (dist1 + c + math.Abs((dist1 - c))) / 2

	fmt.Printf("%.0f eh o maior\n", dist2)

}
