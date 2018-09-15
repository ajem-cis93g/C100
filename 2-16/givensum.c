#include <stdio.h>
int main(){
    int n;
    printf("input a number:");
    scanf("%d",&n);
    int i=1,j=1,sum=0;;
    for(i=1;i<=n/2+2;){
        if(sum<n){
            sum+=i++;
        }
        else if (sum>n){
            sum-=j++;
        }
        else {
            printf("[%d-%d]\n",j,i-1);
            sum-=j++;
        }
    }
    return 0;
}

