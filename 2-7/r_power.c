#include <stdio.h>
int power(int a,int n){
    if (1==n) return a;
    else if (2==n) return a*a;
    else{
        if(0==(n%2)) return power(a,n/2)*power(a,n/2);
        else return a*power(a,n/2)*power(a,n/2);
    }
}
int main(){
    int n=0,base=0;
    printf("input base ");
    scanf("%d",&base);
    printf("input power ");
    scanf("%d",&n);
    printf("%d^(%d) is %d\n",base,n,power(base,n)); 
    return 0;
}

