#include <stdio.h>
#include <stdlib.h>

    /*Napisati program u programskom
jeziku C (dozvoljeno je korištenje funkcija samo
iz stdio.h) koji uèitava prirodne brojeve s i t
(t<=10), a zatim ispisuje vrednost sledeæe sume:
sumFrom (i=1 to s) of (pr(i^t))
gde je pr(n) suma prostih cifara (2, 3, 5 i 7)
broja n. Na primer, pr(32768)=3+2+7=12  */

int prost (int cifra)   {
    if(cifra==2 || cifra==3 || cifra==5 || cifra==7)    {
        return 1;       // prost broj
    }
    return 0;           // nije prost broj
}

int power(int baza, int eksp)  {       // rucni izracun stepena
    int result=1;
    for(int i=1; i<=eksp; i++) {
        result*=baza;
    }
    return result;
}

int main()
{
    int s, t, sP=0, cifra, sum=0;
    do {
        printf("Unesi prirodne vrednosti za n i t! ");
        scanf("%d %d", &s, &t);
    }
    while (s<=0 || t<=0 || t>10);

    for(int i=1; i<=s; i++) {
        sP=0;
        int temp=power(i,t);      // upotreba zasebne funkcije za slucaj da pow() spada u math.h i da ga se ne smije koristiti
        while(temp>0)  {
            cifra=temp%10;
            if(prost(cifra))  {
                sP+=cifra;
            }
            temp/=10;
        }
        sum+=sP;
    }
    printf("Suma je: %d", sum);

    return 0;
}
