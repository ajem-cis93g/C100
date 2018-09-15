#include <stdio.h>
int fib(int n){
    if (n<=2) return 1;
    int i=0;
    int f1=1,f2=1,fn=0;
    for(i=3;i<=n;i++){
        fn=f1+f2;
        f2=f1;
        f1=fn;
    }
    return fn;
    //if (n<=2) return 1;
    //return fib(n-2)+fib(n-1);
}
int main(){
    int n=0;
    printf("input a num ");
    scanf("%d",&n);
    printf("fibonacci(%d) is %d\n",n,fib(n));
    return 0;
}

