#include <stdio.h>

int main(int argc, char * argv[])
{
    int i=-1;
    char c = 'c';

    printf("input a num:" );
    scanf("%d%c",&i,&c );
    if ( c != '\n')
    {
        printf("error\n");
        return 0;
    }
    switch ( i )
    {
        case 1:
            printf("hello\n");
            break;
        case 2:
            printf("good job\n");
            break;
        case 3:
            printf("byebye\n");
            break;
        default:
            printf("error\n");
    }

    return 0;
}
