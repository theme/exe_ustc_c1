#include <stdio.h>

int gcd( int a, int b){
    int l,h;
    int tmp;
    h = a > b ? a : b;
    l = a < b ? a : b;

    while( h%l > 0){
        tmp = l;
        l = h%l;
        h = tmp;
    }

    return l;
}

int lcm( int a, int b){
    return a*b/gcd(a,b);
}

int main(int argc, char * argv[])
{
    int a, b;
    int l,h;
    printf("input two integer(a,b):");
    scanf("%d,%d",&a,&b);
    printf("gcd= %d\n",gcd(a,b) );
    printf("lcm= %d\n",lcm(a,b) );
    return 0;
}

