#include <stdio.h>
#include <stdlib.h>


    /*Dijagramom toka predstaviti
algoritam koji uèitava prirodan broj d, a zatim
ispisuje da li je za njega ispunjeno sledeæe
svojstvo:
d1d2...dk=sumfrom(i=1 to k) of(di^di)
gde je di i-ta cifra broja d koji ima k cifara. Pri
tome, uzeti da je 00=1. Na primer, za broj 3435
jeste ispunjen dati uslov, jer je:
3435=33+44+33+55=27+256+27+3125 */

int main()
{
    int d, sum=0, digit;
    do {
        scanf("%d", &d);
    }
    while (d<=0);
    int temp=d;
    while(temp>0)  {
        digit=temp%10;
        sum+=pow(digit, digit);
        temp/=10;
    }
    if(sum==d) {
        printf("T");
    }
    else {
        printf("F");
    }
    return 0;
}
