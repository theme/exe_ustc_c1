#include <stdio.h>

#define MAX_CR 50

static int CR = 6;

double long fracs(long long int i ){
    if ( i < 1 || i > CR )
    {
        printf("error %lld",i);
        return 1;
    }

    if ( i == CR )
    {
        return 2*(long double)i -1 + (long double)i*i/(2*((long double)i+1)-1);
    }

    return 2*(long double)i -1 + (long double)i*i/fracs((long double)i+1);
}

int main(int argc, char * argv[])
{
    int j;
    for (int j = 6; j<MAX_CR ;j++ )
    {
        CR = j;
        printf("CR=%d\t", CR);
        printf("pi=%.128Lg\n", 4/fracs(1));
    }
    return 0;
}

