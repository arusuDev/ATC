#include <stdio.h>
#include <stdlib.h>
#define IN 10

int cmpint(const void *n1,const void *n2){
    if(*(int *) n1 < *(int *)n2)
        return 1;
    else if(*(int *) n1 < *(int *)n2)
        return -1;
    else
        return 0;
}
// L+1個のピースのうち、最も短いものの長さ(cm)
int main(void){
    int N,L,K;
    int i,l,a[IN] ={0,};
    scanf("%d %d",&N,&L);
    scanf("%d",&K);

    for(i=0;scanf("%d",&a[i]) != EOF;i++){
    }

    qsort(a,i,sizeof(int),cmpint);

    for(l=0;l<i;l++)
        printf("%d ",a[l]);

    return 0;
}