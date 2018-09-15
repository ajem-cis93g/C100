#include <stdio.h>
int sieve(int prime, int n, int *p){
    int i=0;
    for(i=prime+prime+prime;i<n;i+=(prime+prime)){
        *(p+(i-1)/2)=0;
    }
}
int main(){
    int n=0;
    printf("input a number:");
    scanf("%d",&n);
    int *p=(int *)malloc(sizeof(int)*n/2);
    int i=0;
    for(i=0;i<n/2;i++) *(p+i)=1;
    for(i=3;i<n/2;i+=2){
        sieve(i,n,p);
    }
    printf("prime(%d)\n",2);
    for(i=1;i<n/2;i++) {
        if (*(p+i)) printf("prime(%d)\n",2*i+1);
    }
    free(p);
    p=NULL;
    return 0;
}

