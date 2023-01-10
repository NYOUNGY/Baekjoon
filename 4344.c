#include <stdio.h>
#include <math.h>

int main(void){
    int C,N,j,i=0;
    int q[1000]={0,};
    float t,a;
    scanf("%d",&C);
    for(;i<C;i++){
        a=0;
        t=0;
        scanf("%d",&N);
        for(j=0;j<N;j++){
            scanf("%d",&q[j]);
            t+=q[j];
        }
        for(j=0;j<N;j++)
            if(q[j]>t/N)
                a++;
        printf("%0.3f%%\n",round((a/N)*100000)/1000);
    }
}