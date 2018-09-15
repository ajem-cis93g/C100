#include <stdio.h>
int main(){
    int n=0,base=0;
    printf("input base ");
    scanf("%d",&base);
    printf("input power ");
    scanf("%d",&n);
    int sum=0;
    int tmp=1;
    int b=base,p=n;
    while(n){
        if(n&1) tmp*=b;
        b*=b;
        n>>=1;
    }
    printf("%d^(%d) is %d\n",base,p,tmp); 
    return 0;
}

