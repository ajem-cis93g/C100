#include <stdio.h>
#include <math.h>
int main(){
    int n=100;
    int a=0,b=0,c=0;
    for (n=100;n<1000;n++){
        a=(n/100)%10;
        b=(n/10)%10;
        c=n%10;
        if (n==(pow(a,3)+pow(b,3)+pow(c,3)))
            printf("amrs(%d)",n);
    }
    printf("\n");
    return 0;
}

