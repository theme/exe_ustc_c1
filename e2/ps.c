#include <stdio.h>
#include <stdlib.h>

void selectSort( int *a, int l ){
    int p = 0;
    int q = l-1;

    int m;
    int i;
    int tmp;
    while (p<q)
    {
        //find min in p,q
        m = p;
        for (i=p+1; i<=q ; i++)
        {
            if ( a[m] > a[i])
            {
                m = i;
            }
        }

        //swap min with p
        tmp = a[m];
        a[m] = a[p];
        a[p] = tmp;

        //p++
        p++;
    }
}

void quickSort( int *a, int p, int q){
    int pivot;
    int i,j;
    int tmp;

    if (p>q)
        return;

    pivot = a[p];
    i = p;
    for (j=i+1;j<=q ;j++ )
    {
        if ( a[j] < pivot)
        {
            tmp = a[++i];
            a[i] = a[j];
            a[j] = tmp;
        }
    }
    tmp = a[i];
    a[i] = pivot;
    a[p] = tmp;

    quickSort( a, p, i-1);
    quickSort( a, i+1, q);

}

int main(int argc, char * argv[])
{
    unsigned int num;
    unsigned int i;
    int *p;

    printf("number of int:");
    scanf("%d", &num);

    p = (int*) malloc( sizeof(int) * num);
    if (!p)
        return -1;

    printf("numbers:");
    for(i=0; i<num; i++){
        scanf("%d",&p[i] );
    }

    //selectSort(p,num);
    quickSort(p, 0, num-1);

    for(i=0; i<num; i++){
        printf("%d ",p[i] );
    }
    printf("\n");

    free(p);

    return 0;
}

