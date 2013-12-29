#include <stdio.h>
#include <stdlib.h>

int max(int a, int b);

int main(int argc, char * argv[])
{
    int a, b;
    printf("input two num(a,b):");
    scanf("%d,%d",&a,&b );
    printf("%d,%d\n",a,b );

    printf("sum=%d\n",a+b );
    printf("diff=%d\n",a-b );
    printf("product=%d\n",a*b );
    printf("quotient=%d\n",a/b );
    printf("\tremainder=%d\n",a%b );
    printf("|diff|=%d\n",abs(a-b));
    printf("biggger=%d\n",max(a,b));

    return 0;
}

int max(int a, int b){
    return a>b?a:b;
}
