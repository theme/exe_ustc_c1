#include <stdio.h>

int htoi( char s[]){
    int i;
    int d = 0;
    int v;
    for (i=0; s[i] != '\0' ; i++ )
    {
        if ( '0' <= s[i] && s[i] <= '9' )
            v = s[i] - '0';
        if ( 'a' <= s[i] && s[i] <= 'f' )
            v = s[i] - 'a' +10;
        if ( 'A' <= s[i] && s[i] <= 'F' )
            v = s[i] - 'A' +10;

        d = (d<<4) + v;
    }
    return d;
}

int isHex( char s[] ){
    int i;
    if (!(      s[0] == '0'
                && ( s[1] == 'x' || s[1] =='X' )
         )){
        //printf("headerror\n");
        return 0;   //false
    }

    for ( i = 0; s[i]!='\0' && i<128; i++ )
    {}              //to tail

    if ( i == 128 ){
        //printf("too long\n");
        return 0;   //false
    }

    i--;    //point to last none '\0' char

    for ( ; i>=2; i--){ //check every char in 0~9 and a~f
        if (!(      ( '0' <= s[i] && s[i] <= '9')
                    || ( 'a' <= s[i] && s[i] <= 'f')
                    || ( 'A' <= s[i] && s[i] <= 'F')
             )){
            //printf("char s[%d]=%c error\n",i,s[i]);
            return 0;
        }
    }
    return 1;
}

int main(int argc, char * argv[])
{
    char s[128]={};
    int i, d;

    while(1){
        scanf("%s",s);
        if (!isHex(s))
            printf("%s\nformat error, input again:(0x09af)",s );
        else
            break;
    }

    //printf("%s\nformat ok. ",s );

    printf("%d\n", htoi(s));

    return 0;
}

