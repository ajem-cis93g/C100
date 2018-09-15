#include <stdio.h>
int fib(int n, int x, int y){
    if(n==0) return 1;
    else if (n==1) return 2;
    else{
        int F0,F1,A0,A1,t0,t1;
        int i=0;
        for(F0=1,F1=1,A0=1,A1=2,i=2;i<=n;i++){
            t0=x*F0+y*F1;
            F0=F1;
            F1=t0;
            t1=x*F0+y*(A1-F0)+F0+F1;
            A0=A1;
            A1=t1;
        }
        return A1;
    }
    return 0;
}
int main(){
    int n=0,x=0,y=0;
    printf("input n ");
    scanf("%d",&n);
    printf("input x ");
    scanf("%d",&x);
    printf("input y ");
    scanf("%d",&y);
    printf("extensive fibonacci X*Fi-2+Y*Fi-1 (%d,%d,%d) is %d\n",n,x,y,fib(n,x,y));
    return 0;
}

