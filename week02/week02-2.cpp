///floating point number 浮點數 double floating point number 兩倍的浮點數
#include<stdio.h>
int main(){
    float pi = 3.14159265358979323846243383279;
    double pi2 = 3.14159265358979323846243383279;
    printf("float %f\n",pi);
    printf("double %f\n",pi2);
    printf("float 10位: %10f\n",pi);
    printf("double 10位: %10f\n",pi2);
    printf("float 10位: %20.18f\n",pi);
    printf("double 10位: %20.18f\n",pi2);
}
