#include <stdio.h>
int main(){
    int a[]={1,3,4,7,9};
    int b[]={3,5,7,8,10};
    int na=sizeof(a)/sizeof(int);
    int nb=sizeof(b)/sizeof(int);
    int eq_count=0;
    int i=0,j=0;
    while(i<na && j<nb){
        if(a[i]==b[j]){
            eq_count++;
            i++;
            j++;
        }
        else if(a[i]<b[j]) i++;
        else j++;
    }
    printf("eq(%d)\n",eq_count);
    return 0;
}

