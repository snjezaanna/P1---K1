#include <stdio.h>

    /*  Napisati program u programskom
jeziku C (dozvoljeno je korištenje funkcija samo
iz stdio.h) koji uèitava realan broj x i prirodan
broj k, a zatim ispisuje vrednost sledeæe sume:
sumFrom (j=1 to k) of (j!/k!)    */


int main() {
    int k;
    double x, sum=0;
    do {
        printf("Unesi neki realan broj x i prirodan broj k! ");
        scanf("%lf %d", &x, &k);
    }
    while(k<=0);

    for(int j=1; j<=k; j++) {
        long long factJ=1;
        for(int i=1; i<=j; i++) {
            factJ*=i;
        }
        long long factK=1;
        for(int i=1; i<=k; i++) {
            factK*=i;
        }
        sum+=(double)factJ/factK;
    }
    printf("%lf", sum);

    return 0;
}
