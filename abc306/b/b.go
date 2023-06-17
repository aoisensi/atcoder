package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func main() {

	reader := bufio.NewReader(os.Stdin)
	text, _, _ := reader.ReadLine()
	parsed := strings.Split(string(text), " ")
	var n uint64
	for i := 0; i < 64; i++ {
		if parsed[i] == "1" {
			n += 1 << uint64(i)
		}
	}
	fmt.Println(n)
}
