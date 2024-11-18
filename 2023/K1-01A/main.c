#include <stdio.h>
#include <stdlib.h>

    /*  Dijagramom toka predstaviti
algoritam koji uèitava prirodne brojeve a i b
(a<b), a zatim ispisuje proste brojeve iz
segmenta [a,b] èiji ternarni ekvivalent sadrži
cifru 2. Na primer, broj 5 je prost, a ternarni
ekvivalent broja 5 (123) sadrži cifru 2. Prirodan
broj veæi od jedan je prost ako je deljiv samo sa
jedan i samim sobom.    */

int prost(int num)  {
    if(num<2)   return 0;
    for(int i=2; i*i<=num; i++) {
        if(num%i==0) return 0;
    }
    return 1;
}

int main()
{
    int a, b, cifra;
    do {
        printf("Unesi opseg [a, b]!");
        scanf("%d %d", &a, &b);
    }
    while(a<=0 || b<=0 || b<=a);

    for(int i=a; i<=b; i++) {
        int temp=i;
        if(prost(temp)) {
            while(temp>0)  {
                cifra=temp%3;
                if(cifra==2)   {
                    printf("%d sadrzi cifru 2\n", i);
                 //   break;
                }
                temp/=3;
            }
        }
    }

    return 0;
}
