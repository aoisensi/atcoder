package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	var n int
	fmt.Scanf("%v\n", &n)
	reader := bufio.NewReader(os.Stdin)
	text, _, _ := reader.ReadLine()
	for _, c := range text {
		for i := 0; i < len(text)*2/n; i++ {
			fmt.Print(string(c))
		}
	}
	fmt.Println()
}
