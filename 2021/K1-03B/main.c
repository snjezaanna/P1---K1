#include <stdio.h>
#include <stdlib.h>

    /*  Napisati program u programskom
jeziku C (dozvoljeno je korištenje funkcija samo
iz stdio.h) koji uèitava realan broj x i prirodan
broj k, a zatim ispisuje vrednost sledeæe sume:
sumFrom (j=1 to k) of (j!/k!)    */

long long factorial (int n) {
    long long result=1;
    for(int i=1; i<=n; i++) {
        result*=i;
    }
    return result;
}

int main()
{
    double x, sum=0;
    int k;
    do {
        printf("Unesi realan broj x i prirodan broj k, tim redoslijedom! ");
        scanf("%lf %d", &x, &k);
    }
    while (k<=0);

    for(int j=1; j<=k; j++) {
        sum+=(double)factorial(j)/factorial(k);     // nepotrebno je dodjeljivati j i k drugim promjenljivima jer nije u pitanju neki izraz za faktorijel
    }
    printf("Suma svih je: %lf", sum);

    return 0;
}
