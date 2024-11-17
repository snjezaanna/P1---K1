#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    /*  Napisati program u programskom
jeziku C koji uèitava prirodan broj n (n>100), a
zatim pronalazi i ispisuje najmanji prirodan broj k
takav da je proizvod delilaca broja k veæi od broja
n. Na primer, proizvod delilaca broja 12 je:
1*2*3*4*6*12=1728.  */


int main()
{
    int n, proizvD=1, k;
    do {
        printf("Unesi prirodan broj n! ");
        scanf("%d", &n);
    }
    while(n<100);

    for(k=1; ; k++) {           // petlja nema ogranicenje, jer se trazi prvi broj koji zadovoljava pocetni uslov
        proizvD=1;
        for(int i=1; i<=sqrt(k); i++) {
            if(k%i==0)  {
                proizvD*=i;
                if(i!=k/i)  {   // dodavanje parnog djelioca ako je i!=k/i
                    proizvD*=(k/i);
                }
            }
        }
        if(proizvD>n) {
        printf("Trazeni broj je %d", k);
        break;                 // izlaz iz petlje po pronalasku prvog k koji zadovoljava uslov
        }
    }


    return 0;
}
