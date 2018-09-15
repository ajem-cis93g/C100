#include <stdio.h>
#include <math.h>
void printSet(int *a, int end){
    int i=0;
    printf("{");
    for(i=0;i<end;i++)
        printf("%d,",*(a+i));
    printf("}\n");
}
void resetArray(int *a,int n, int base,int start){
    int i=0,j=0;
    for(i=start,j=0;i<n;i++,j++){
        *(a+i)=base+j;
    }
}
int main(){
    int n=0;
    printf("input a number ");
    scanf("%d",&n);
    int i=0,j=0,t=0;
    int *a=malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        *(a+i)=i+1;
    }
    printSet(a,0);
    i=0;
    while(1){
        if(*(a+i)!=n){
            printSet(a,i+1);
            i++;
        }
        
        else if(*(a+i)==n){
            printSet(a,i+1);
            *(a+i-1)+=1;
            i--;
            resetArray(a,n,*(a+i),i);
        }
        if(*a==n) {
            printSet(a,1);
            break;
        }
    } 
    
    return 0;
}

