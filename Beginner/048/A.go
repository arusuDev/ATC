package main
import (
	"fmt"
	"os"
	"strings"
	"bufio"
)

var sc = bufio.NewScanner(os.Stdin)

func nextLine() string{
	sc.Scan()
	return sc.Text()
}

func main(){
	line := nextLine()
	col := strings.Split(line," ")
	for _,c := range col{
		fmt.Print(string([]rune(c)[:1]))
	}
	fmt.Println()
}