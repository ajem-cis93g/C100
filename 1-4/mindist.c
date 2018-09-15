#include <stdio.h>
int main(){
    int a[]={1,5,10,12};
    int b[]={7,11,13,16,18};
    int na=sizeof(a)/sizeof(int);
    int nb=sizeof(b)/sizeof(int);
    int i=0,j=0;
    int mindist=1000,dist;
    while(i<na && j<nb){
        dist=a[i]-b[j];
        if(0==dist){
            mindist=0;
            break;
        }
        else if(dist<0){
            i++;
        }
        else{
            j++;
        }
        dist=abs(dist);
        if (mindist>dist) mindist=dist;
    }
    printf("mindist(%d)\n",mindist);
    return 0;
}

