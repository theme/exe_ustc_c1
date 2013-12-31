#include <stdio.h>

int main(int argc, char * argv[])
{
    char s[26]={};
    char c;
    int i;

    while( (c = getchar()) != '\n' ){
        if ( 'a' <= c && c <= 'z' )
            s[c-'a']++;
        if ( 'A' <= c && c <= 'Z' )
            s[c-'A']++;
    }

    for ( i = 0; i< 26 ; i++ )
    {
        if (s[i] > 0)
        {
            printf("%c\t%d\n",i+'a',s[i] );
        }
    }
    
    return 0;
}
