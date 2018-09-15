#include <stdio.h>
void rotateArray(int *a, int n, int size){
    int i=0,t1=0,t2=0;
    t1=*(a+n-1);
    for(i=0;i<n;i++){
        t2=*(a+i);
        *(a+i)=t1;
        t1=t2;
    }
    for(i=0;i<size;i++) printf("%d",*(a+i));
    printf("\n");
}
int main(){
    int n=0;
    printf("input a number: ");
    scanf("%d",&n);
    int *array=(int *)malloc(sizeof(int)*n);
    int i=0,j=0;
    for(i=0;i<n;i++) *(array+i)=i+1;
    rotateArray(array,n,n);
    return 0;
}

