package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

var first = map[string]int{}
var second = map[string]int{}

// not solved
func main() {
	var n int
	fmt.Scanf("%v\n", &n)

	reader := bufio.NewReader(os.Stdin)
	text, _, _ := reader.ReadLine()

	parsed := strings.Split(string(text), " ")

	var result []string

	for i, as := range parsed {
		if _, ok := second[as]; ok {
			// do nothing
		} else if _, ok := first[as]; ok {
			second[as] = i
			result = append(result, as)
		} else {
			first[as] = i
		}
	}
	fmt.Println(strings.Join(result, " "))
}
