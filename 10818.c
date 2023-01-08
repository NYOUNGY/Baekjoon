#include <stdio.h>

int main(void){
    int t,N,i=1;
    int max;
    int min;
    scanf("%d",&N);
    for(scanf("%d",&min),max=min;i++<N;){
        printf("%d %d",min,max);
        scanf("%d",&t);
        if(max<t)
            max=t;
        if(min>t)
            min=t;
    }
    printf("%d %d",min,max);
}