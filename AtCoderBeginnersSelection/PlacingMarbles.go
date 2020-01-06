package main

import "fmt"

func main(){
	var a int
	fmt.Scanf("%d",&a)
	count := 0
	for a != 0 {
		count += a%10
		a /= 10
	}
	fmt.Printf("%d\n",count)
}