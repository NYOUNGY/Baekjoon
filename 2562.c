#include <stdio.h>

int main(void){
    int d,t,i=1;
    int max;

    for(scanf("%d",&max),d=1;i++<9;){
        scanf("%d",&t);
        if(max<t){
            max=t;
            d=i;
        }
    }
    printf("%d %d",max,d);
}