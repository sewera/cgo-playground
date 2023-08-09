package main

/*
#include "library.h"
*/
import "C"

func main() {
	world := C.CString("World")
	C.greet(world)
}
