package main

import "fmt"

func main(){
	var N,temp int
	fmt.Scanf("%d",&N)
	var a []int
	for i:=0;i<N;i++ {
		fmt.Scan(&temp)
		a = append(a,temp)
	}
	count := -1
	flag := true
	for flag {
		for i,v := range a {
			if v%2 == 1{
				flag = false
			}
			a[i] /= 2
		}
		count++
	}

	fmt.Println(count)
}