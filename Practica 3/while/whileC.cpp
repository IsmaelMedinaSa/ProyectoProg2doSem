#include <stdio.h>
int i=0, j=10, n=0 ;

int main()
{
    while(i!=j){i=i+2;j=j-2;n++;
        printf(" i=%d\t j=%d\t n=%d\n", i, j, n);
    }
    return 0;
}
