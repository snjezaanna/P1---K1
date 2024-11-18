#include <stdio.h>
#include <stdlib.h>

    /*  Napisati program u programskom
jeziku C (dozvoljeno je korištenje funkcija samo
iz stdio.h) koji uèitava prirodne brojeve a, b
(a<b) i k (k<=10), a zatim ispisuje sledeæe
vrednosti: e^a, e^(a+0.5), e^(a+1), … , e^(b-0.5), e^b.
Vrednost e^x može da se izraèuna korištenjem
sledeæe formule: e^x=1+x/1!+x^2/2!+...+x^k/n!   */

int power(int baza, int eksp)  {
    int result=1;
    for(int i=1; i<=eksp; i++) {
    result*=baza;
    }
    return result;
}

long long factorial(int n)  {
    long long result=1;
    for(int i=1; i<=n; i++) {
        result*=i;
    }
    return result;
}
int main()
{
    int a, b, k;
    do {
        printf("Unesi prirodne vrijednosti a, b i k, takve da je a<b i k<=10 ");
        scanf("%d %d %d", &a, &b, &k);
    }
    while(a<=0 || b<=0 || a>=b || k<=0 || k>10);

    for(double x=a; x<=b; x+=0.5) {
        double sum=1.0;
        for(int n=1; n<=k; n++) {
            int stepen=power((int)x,n);
            int fakt=factorial(n);
            sum+=(double)stepen/fakt;
        }
        printf("e^%.1f = %.6f\n", x, sum);
    }

    return 0;
}
