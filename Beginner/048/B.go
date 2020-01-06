package main

import(
	"bufio"
	"fmt"
	"os"
	"strconv"
)

var sc = bufio.NewScanner(os.Stdin)

func nextInt() int{
	sc.Scan()
	i,e := strconv.Atoi(sc.Text())
	if e != nil{
		panic(e)
	}
	return i
}

func main(){
	sc.Split(bufio.ScanWords)
	a,b,x := nextInt(),nextInt(),nextInt()
	fmt.Println(a,b,x)
	count := 0
	for i:=a;i<b;i++ {
		if i%x == 0{
			count++
		}
	}
	fmt.Println(count)
}