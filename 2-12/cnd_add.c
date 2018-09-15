#include <stdio.h>

int main(){
    int n=0,r=0;
    printf("input n ");
    scanf("%d",&n);
    printf("input r ");
    scanf("%d",&r);
    if (r>n){
        printf("%d choose %d is %d\n",n,r,0);
        return 0;
    }
    r=((n-r)>r)?r:(n-r);
    int i=0,j=0,tmp=0;
    int *prev=(int *)malloc((n+1)*sizeof(int));
    int *curr=(int *)malloc((n+1)*sizeof(int));
    for (i=0;i<=n;i++){
	    if (0==i) {
	        *curr=1;
	    }
	    else if (1==i) {
	        *curr=1;
	        *(curr+1)=1;
            if(i==n && j==r) {
                tmp=*(curr+j);
                break;
            }
	    }
	    else{
	        for(j=0;j<=r && j<=i;j++){
	    	    if (j<i){
	    	        *(curr+j)=*(prev+j-1)+*(prev+j);
	    	    }
	    	    else{   /*i==j or 0==j*/
		            *(curr+j)=1;
	  	        }
                if(i==n && j==r) {
                    tmp=*(curr+j);
                    break;
                }
	        }
        }
	    memcpy(prev,curr,(i+1)*sizeof(int));
    }       
    
    
    printf("%d choose %d is %d\n",n,r,tmp);
    return 0;
}

