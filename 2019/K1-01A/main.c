#include <stdio.h>
#include <stdlib.h>

/*Napisati program u programskom
jeziku C (dozvoljeno je kori�tenje funkcija samo iz
stdio.h) koji u�itava prirodne brojeve x i k (k>1), a
zatim iterativno ra�una slede�u sumu, pri �emu se
u obzir uzima prvih k �lanova sume:
S=sumOf((((-1)^k))*((2k-1)^x)/(2k-2)!)
Na kraju ispisati dobijenu vrijednost - sumu*/

long long factorial(int n) {
    long long result=1;
    for(int i=1; i<=n; i++) {
        result*=i;
    }
    return result;
}

int main()
{
    int k, x, S=0, l;


    printf("Unesi prirodne brojeve k i x! ");
    do {
        scanf("%d %d", &k, &x);
    }
    while(k<1);
    for(int i=1; i<=k; i++) {

        int value=2*i-2;

    //  za slucaj da ne zelis pisati funkciju:
    /*  long long fact=1;
        for(int j=1; j<=value; j++) {
        fact*=i;
    }
    */

        l=(pow(-1, i)*pow((2*i-1),x))/(factorial(value));
        S+=l;
    }
    printf("%d", S);
    return 0;
}
