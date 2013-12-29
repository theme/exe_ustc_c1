#include <stdio.h>

int factorial(int n);

int main(int argc, char * argv[])
{
    int i;
    for(i=0;i<13;i++){
        printf("%d! = %d\n",i,factorial(i));
    }

    return 0;
}

int factorial(int n){
    int i,f;
    f = 1;
    for(i=2;i<=n;i++){
        f *= i;
    }
    return f;
}
