#include <stdio.h>

int main(int argc, char * argv[])
{
    int i,b;
    char B[32];
    int j,k;
    char tmp;

    B[31] = '\0';
    scanf("%d", &i);

    b=i;
    for (j=0; b > 0 && j<31; j++ ){
        B[j] = (b & 0x1) + '0';
        b >>= 1;
    } 
    if (j<31)
        B[j] = '\0';
    j--;

    for (k=0; k <= j/2; k++ )
    {
        tmp = B[j-k];
        B[j-k] = B[k];
        B[k] = tmp;
    }

    printf("0b%s\n", B);
    printf("0x%x\n", i);

    return 0;
}

