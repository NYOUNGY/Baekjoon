#include <stdio.h>

int main(void){
    int a[42]={0,};
    int n,i,c=0;
    for(i=0;i++<10;){
        scanf("%d",&n);
        a[n%42]++;
        if(a[n%42]==1)
            c++;
    } 
    printf("%d",c);
}