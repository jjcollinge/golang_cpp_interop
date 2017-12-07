package main

import (
	"fmt"

	"github.com/jjcollinge/cgo_introp/world"
)

func main() {
	name := "Joni"
	fmt.Printf("Hello %v from Go!\n", name)
	w := world.NewWorld()
	w.Hello(name)
}
