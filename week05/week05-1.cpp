#include<stdio.h>
int main(){
    int a[4];
    int b[4] = {1,2,3,4};
    a[0] = 4;
    a[1] = 3;
    a[2] = 2;
    a[3] = 1;
    for(int i=0;i<4;i++){
        printf("i=%d a[i]=%d b[i]=%d a+b = %d\n",i,a[i],b[i],a[i]+b[i]);
    }
}
