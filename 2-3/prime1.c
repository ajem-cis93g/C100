#include <stdio.h>
int main(){
    int p[1000000]={0};
    p[0]=2;
    p[1]=3;
    p[2]=5;
    int index=3;
    int n=0;
    printf("input a number:");
    scanf("%d",&n);
    int i=1,j=0;
    int isPrime=0;
    int k=0;
    while(1){
        k=6*i+1;
        if(k>n) break;
        for(j=0;p[j]*p[j]<=k;j++){
            if (k%p[j]!=0) {
                isPrime=1;
                continue;
            }
            else{
                isPrime=0;
                break;
            }
        }
        if (isPrime){
            p[index++]=k;
        }
        k=6*i+5;
        if(k>n) break;
        for(j=0;p[j]*p[j]<=k;j++){
            if (k%p[j]!=0) {
                isPrime=1;
                continue;
            }
            else{
                isPrime=0;
                break;
            }
        }
        if (isPrime){
            p[index++]=k;
        }
        i++;
    }
    for(i=0;i<index;i++) printf("prime(%d)\n",p[i]);
    return 0;
}

