package main

import "fmt"

func main() {

	var seg, min, hr int

	fmt.Scanf("%d", &seg)

	hr = seg / 3600
	seg = seg - hr * 3600

	min = seg / 60
	seg = seg - min * 60

	fmt.Printf("%d:%d:%d\n", hr, min, seg)

}
