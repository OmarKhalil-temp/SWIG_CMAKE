package main

import (
	add "cgo/go/go_cpp"
	"fmt"
)

func main() {
	a := add.Adder(2001, 2007)
	fmt.Println(a)
}
