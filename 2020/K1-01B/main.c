#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    /*  Dijagramom toka predstaviti
algoritam koji uèitava prirodan broj n, a zatim
ispisuje da li je za njega ispunjeno sledeæe
svojstvo:

gde je nj j-ta cifra broja n koji ima t cifara. Npr. za
broj 1676 jeste ispunjen dati uslov, jer je:
1676=1^5+6^4+7^3+6^2=1+1296+343+36  */

int main()
{
    int n, cifra, sum=0, brCifara=0, temp;
    do {
        printf("Unesite neki broj! ");
        scanf("%d", &n);
    }
    while(n<=0);

    temp=n;
    while(temp>0)   {       //trazenje broja cifara
          brCifara++;       //podignuto odmah na 1
          temp/=10;         //odbacivanje uracunate cifre
    }
    temp=n;                 //reset temp na originalnu vrijednost
    while(temp>0)   {
        cifra=temp%10;      //uzimanje posljednje cifre
        int stepen=1;
        for(int i=0; i<brCifara; i++)  {    //rucno racunanje stepena bez pow
            stepen*=cifra;
        }
        sum+=stepen;    //dodavanje cifra^(brCifara) u sumu
        brCifara--;     //smanjenje stepena
        temp/=10;       //odbacivanje posljednje cifre
    }
    if(sum==n)  {
        printf("Uslov je ispunjen za broj %d\n", n);
    }
    else {
        printf("Uslov nije ispunjen za unijeti broj!\n");
    }

    return 0;
}
