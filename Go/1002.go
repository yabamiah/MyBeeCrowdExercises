package main
 
import "fmt"
 
func main() {

    var raio float64

    fmt.Scanf("%f", &raio)

    var area float64 = (raio * raio) * 3.14159

    fmt.Printf("A=%.4f\n", area)
}
