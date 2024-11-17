#include <stdio.h>
#include <stdlib.h>

    /*Napisati program u programskom
jeziku C (dozvoljeno je korištenje funkcija samo
iz stdio.h) koji uèitava realan broj x i prirodan
broj n, a zatim ispisuje vrednost sledeæe sume:
sumFrom (i=0 to n) of ((-1)^(n) *x^n/n!) */

long long factorial (int n) {
    long long result=1;
    for(int i=1; i<=n; i++) {
        result*=i;
    }
    return result;
}

int main()
{
    int n;
    double x, sum=0;
    do {
        printf("Unesi realan broj x i prirodan broj n tim redom! ");
        scanf("%lf %d", &x, &n);
    }
    while(n<=0);

    for(int i=0; i<=n; i++) {
            int value=i;
        sum+=(pow((-1),i)* (pow(x,i)/factorial(value)));
    }
    printf("%lf", sum);

    return 0;
}
