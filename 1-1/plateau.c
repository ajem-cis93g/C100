#include <stdio.h>
#define MAXNUM 100
int main(){
    int a[MAXNUM]={3,3,3,3,3,4,4,4,4,4,4,4,4,4,4,5,7};
    int i=1;
    int maxPlateau=1;
    int plateau=1;
    int n_of_plateaue=a[0];
    while(1){
        if (a[i]=='\0') break;
        if (i>MAXNUM) break;
        if (a[i]==a[i-1]){
            plateau++;
        }
        else{
            if (plateau>maxPlateau){
                maxPlateau=plateau;
                n_of_plateaue=a[i-1];
            }
            plateau=1;
        }    
        i++;
    }
    printf("length(%d) number(%d)\n",maxPlateau,n_of_plateaue);
    return 0;
}

