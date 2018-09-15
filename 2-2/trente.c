#include <stdio.h>
int main(){
    int vingt=0;
    int cinq=0;
    int trente=0;
    int v=0,i=0,n=0,g=0,c=0,q=0,e=0,t=0;
    for(v=8;v<=9;v++){
        for(e=3;e<=9;e+=2){
            for(i=4;i<=9;i+=5){
                for(n=6;n<=9;n++){
                    for(g=2;g<=9;g++){
                        for(c=2;c<=9;c++){
                            for(q=2;q<=9;q++){
                                vingt=v*10000+i*1000+n*100+g*10+1;
                                cinq=c*1000+i*100+n*10+q;
                                trente=100000+e*1000+n*100+1*10+e;
                                if (trente == (vingt+2*cinq)){
                                    if (q==c||q==g||q==n||q==i||q==e||q==v||c==g||c==n||c==i||c==e||c==v||g==n||g==i||g==e||g==v||n==i||n==e||n==v||i==e||i==v||e==v) continue;
                                    printf("trente(%d) vingt(%d) cinq(%d)\n",trente,vingt,cinq);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

