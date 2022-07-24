package main

import "fmt"

func main() {

	var dist, pt, kml float64

	fmt.Scanf("%f", &dist)
	fmt.Scanf("%f", &pt)

	kml = dist / pt

	fmt.Printf("%.3f km/l\n", kml)
}

