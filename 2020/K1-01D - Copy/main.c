#include <stdio.h>
#include <stdlib.h>


    /*   Dijagramom toka predstaviti
algoritam koji učitava prirodan broj k, a zatim
pronalazi i ispisuje broj P:
P=∑from(j=1 to k) of((kompl k)^j)
gde je kj j-ta cifra broja k koji ima n cifara, a k j
komplement j-te cifre (cifra+komplement=9). Pri
tome, k1 je najlakša, a kn najteža cifra. Na primer,
za broj 248 vrednost broja P je:
P=73+52+11=343+25+1=369 */

int main()
{
    int k, P=0, kompl, pozicija=1, cifra;
    do {
        printf("Unesi neki k prirodan broj! ");
        scanf("%d", &k);
    }
    while(k<=0);

    while(k>0)  {
        cifra=k%10;
        kompl=9-cifra;
        int stepen=1;
        for(int i=1; i<=pozicija; i++) {
            stepen*=kompl;

        }
        P+=stepen;
//        P+=pow(kompl, pozicija);
        k/=10;
        pozicija++;
    }
    printf("Suma je: %d", P);

    return 0;
}
