#include <stdio.h>
int main(){
    int a[]={1,3,5,7,9};
    int b[]={2,3,4,7,8};
    int na=sizeof(a)/sizeof(int);
    int nb=sizeof(b)/sizeof(int);
    int sum=0;
    int i=0,j=0;
    while(1){
        if(a[i]>b[j]){
            j++;
            sum+=na-i;
        }
        else{
            i++;
        }
        if((i==na) || (j==nb)) break;
    }
    printf("sum(%d)\n",sum);
    return 0;
}

