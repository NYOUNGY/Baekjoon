#include <stdio.h>

int main(void){
    int N,i=0;
    float t=0,m=0;
    int a[1000]={0,};
    scanf("%d",&N);
    for(;i<N;i++){
        scanf("%d",&a[i]);
        t+=a[i];
        if(a[i]>m)
            m=a[i];
    }
    printf("%f",((t/m)*100)/N);
}