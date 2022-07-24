// Cédulas - 1018
// @author: Yabamiah
package main

import "fmt"

func main() {
	 
	var din, n100, n50, n20, n10, n5, n2, n1 int

	fmt.Scanf("%d", &din)

	fmt.Println(din)

	n100 = din / 100 
	din = din - (n100 * 100)
	fmt.Printf("%d nota(s) de R$ 100,00\n", n100)

	n50 = din / 50
	din = din - (n50 * 50)
	fmt.Printf("%d nota(s) de R$ 50,00\n", n50)

	n20 = din / 20 
	din = din - (n20 * 20)
	fmt.Printf("%d nota(s) de R$ 20,00\n", n20)

	n10 = din / 10 
	din = din - (n10 * 10)
	fmt.Printf("%d nota(s) de R$ 10,00\n", n10)

	n5 = din / 5 
	din = din - (n5 * 5)
	fmt.Printf("%d nota(s) de R$ 5,00\n", n5)

	n2 = din / 2
	din = din - (n2 * 2)
	fmt.Printf("%d nota(s) de R$ 2,00\n", n2)

	n1 = din / 1
	fmt.Printf("%d nota(s) de R$ 1,00\n", n1)

}
