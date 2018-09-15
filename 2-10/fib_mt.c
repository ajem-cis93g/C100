#include <stdio.h>
int fib(int n){
    if (n<=2) return 1;
    int tmp[4]={0};
    int fn=0;
    int a[4]={1,1,1,0};//ax=b
    int x[2]={1,1};//ax=b
    n=n-2;
    while(n){
        if(n&1){
            fn=a[0]*x[0]+a[1]*x[1];
            x[1]=a[2]*x[0]+a[3]*x[1];
            x[0]=fn;
        }
        tmp[0]=a[0]*a[0]+a[1]*a[2];
        tmp[1]=a[0]*a[1]+a[1]*a[3];
        tmp[2]=a[2]*a[0]+a[3]*a[2];
        tmp[3]=a[2]*a[1]+a[3]*a[3];
        memcpy(a,tmp,4*sizeof(int));
        n>>=1;
    }
    return fn;
}
int main(){
    int n=0;
    printf("input a num ");
    scanf("%d",&n);
    printf("fast fibonacci(%d) is %d\n",n,fib(n));
    return 0;
}

