#include <stdio.h>
#include <math.h>
int main(){
    int n=0;
    printf("input a number ");
    scanf("%d",&n);
    int i=0,j=0,t=0;
    for(i=0;i<pow(2,n);i++){
        printf("{");
        for(j=1,t=1;j<=i;j<<=1,t++){
            if(i&j) {       // AND with 0x001, 0x010, 0x100,...
                //int t=(int)(log10(j)/log10(2));
                printf("%d,",t);
            }
        }
        printf("}\n");
    }
    return 0;
}

