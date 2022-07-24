// Indentificando o chá - 2006
// @author: Yabamiah
package main

import "fmt"

func main() {

	var tpCha, res int
	var ans int = 0

	fmt.Scanf("%d", &tpCha)

	for i:= 0; i < 5; i++ {

		fmt.Scanf("%d", &res)
		if (res == tpCha) {
			ans++

		}
	}

	fmt.Println(ans)
}
