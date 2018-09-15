#include <stdio.h>
int sieve(int prime, int n, int *p){
    int i=0;
    for(i=prime+prime+prime;i<n;i+=(prime+prime)){
        if (0==*(p+(i-1)/2)) continue;
        *(p+(i-1)/2)=0;
    }
}
int factor(int prime,int *n){
    int power=0;
    while((*n)){
        if(0==((*n)%prime)){
            power++;
        }
        else break;
        (*n)/=prime;
    }
    printf("%d(%d)\n",prime,power);
}
int main(){
    int n=0;
    printf("input a number:");
    scanf("%d",&n);
    int *p=(int *)malloc(sizeof(int)*((n+2-1)/2)); //ceil of n
    int i=0;
    for(i=0;i<(n+2-1)/2;i++) *(p+i)=1;
    for(i=3;i<n/2;i+=2){
        sieve(i,n,p);
    }
    factor(2,&n);
    for(i=1;i<=n/2;i++) {
        if (*(p+i)) {
            factor(2*i+1,&n);
        }
    }
    free(p);
    p=NULL;
    return 0;
}

