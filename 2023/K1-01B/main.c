#include <stdio.h>
#include <stdlib.h>

    /*  Dijagramom toka predstaviti
algoritam koji uèitava prirodan broj n, a zatim
ispisuje najmanji prost broj veæi od uèitanog
broja èiji kvaternarni ekvivalent sadrži cifru 3.
Na primer, broj 7 je prost, a kvaternarni
ekvivalent broja 7 (134) sadrži cifru 3. Prirodan
broj veæi od jedan je prost ako je deljiv samo sa
jedan i samim sobom.    */

int prost(int n)  {
    if(n<2) return 0;

    for(int i=2; i*i<=n; i++) {
        if(n%i==0)  return 0;

    }
        return 1;
}

int main()
{
    int n, cifra;

    do{
        printf("Unesi prirodan broj n! ");
        scanf("%d", &n);
    }
    while(n<=0);

    for(int i=n+1; ; i++)  {
        int temp=i;
        if(prost(temp)) {
            while(temp>0) {
                cifra=temp%4;
                if(cifra==3)  {
                printf("%d sadrzi cifru 3", i);
                break;       // za izlazak iz unutrasnje while petlje kada se nadje broj sa cifrom 3 u kvaternarnom
            }
            temp/=4;
        }
        if(temp==0) {
            continue;       // nastavak petlje i trazenje broja koji zadovoljava uslov kada se ne nadje cifra 3 u prvom kvaternarnom broju
        }
        break;              // izlaz iz spoljne for petlje - zaustavljanje dalje potrage po pronalasku prvog broja koji zadovoljava sve uslove
    }
    }
    return 0;
}
