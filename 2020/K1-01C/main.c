#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, sumK=0, cifra, kompl;
    do {
        printf("Unesi neki prirodan broj! ");
        scanf("%d", &t);
    }
    while(t<=0);

    while(t>0)   {

        cifra=t%10;
        kompl=9-cifra;
        sumK+=pow(kompl, cifra);
        t/=10;
    }
    printf("%d", sumK);
    return 0;
}
