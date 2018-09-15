#include <stdio.h>
#include <stdlib.h>
int isPowerOfTwo(int x){
    return (x & (x - 1)) == 0;
}
void printSet(int x){
    int j,t;
    printf("{");
    for(j=1,t=1;j<=x;j<<=1,t++){
        if(x&j) printf("%d,",t);
    }
    printf("}\n");
}
int main(){
    int n=0;
    printf("inut a number: ");
    scanf("%d",&n);
    int size=pow(2,n);
    int *table=(int *)malloc(sizeof(int)*size);
    memset(table, 0, sizeof(int)*size);
    int i=0,j=0;
    *table=1;
    printf("{}\n");
    int anchor=0,next=0;
    for(j=0;j<size;j++){
        next=anchor;
        for(i=0;i<n;i++) {
            int tmp=next^(1<<i);
            if( isPowerOfTwo(anchor^tmp)&&!(*(table+tmp))){
                *(table+tmp)=1;
                //printf("%d\n",tmp);
                printSet(tmp);
                anchor=tmp;
                break;
            }
        }
    }
    return 0;
}

