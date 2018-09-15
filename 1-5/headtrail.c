#include <stdio.h>
int main(){
    int a[]={2,6,2,1,4,5,2};
    int na=sizeof(a)/sizeof(int);
    int i=0,j=na-1;
    int head=a[i],tail=a[j];
    while(i<na && j>=0){
        if(head>tail) {
            tail+=a[--j];
        }
        else if(head<tail){
            head+=a[++i];
        }
        else{
            printf("headtail(%d)",head);
            head+=a[++i];
            tail+=a[--j];
        }
    }
    printf("\n");
    return 0;
}

