#include <stdio.h>

int main(void){
    int n,i=0;
    int a[31]={0,};
    for(;i++<28;){
        scanf("%d",&n);
        a[n]=1;
    }
    
    for(i=0;i++<30;)
        if(a[i]==0)
            printf("%d\n",i);
}