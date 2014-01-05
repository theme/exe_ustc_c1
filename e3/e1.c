#include <stdio.h>

int main(int argc, char * argv[])
{
    char c;
    int clb,crb;
    clb = 0;
    crb = 0;
    while (1)
    {
        if((c = getchar()) == '\n') {
            if (clb == crb)
                printf("match\n");
            else
                printf("dis match\n");
            break;
        }
        if ( '(' == c )
            clb++;
        if (')' == c)
            crb++;
        if ( crb > clb)
        {
                printf("dis match\n");
                break;
        }
    }

    return 0;
}
