#include <stdio.h>
#include <stdlib.h>

    /*  Napisati program u programskom
jeziku C (dozvoljeno je kori�tenje funkcija samo
iz stdio.h) koji na po�etku u�itava prirodan broj
n (n<=10), a zatim u�itava realan broj x i
ispisuje vrednost e^x. U�itavanje broja x i ispis
vrednosti e^x treba ponavljati dok god je u�itano
x>=1. Vrednost e^x mo�e da se izra�una
kori�tenjem slede�e formule:
e^x=1+x/1!+x^2/2!+...+x^n/n!    */

long long factorial(int n) {
    long long result=1;
    for(int i=1; i<=n; i++) {
        result*=i;
    }
    return result;
}

double power(double baza, int eksp)  {
    double rezultat=1;
    for(int i=1; i<=eksp; i++) {
        rezultat*=baza;
    }
    return rezultat;
}

int main()
{
    int n; double x, ex;
    do {
        printf("Unesi prirodan broj n<=10! ");
        scanf("%d", &n);
    }
    while(n>10 || n<=0);

    do{
        printf("\nUnesi realan broj x! ");
        scanf("%lf", &x);
//        if(x<1) {
//                break;
//        }
        ex=1.0;
        for(int i=1; i<=n; i++) {
        ex+=power(x, i)/factorial(i);
        }
        printf("Vrijednost e^x je: %lf\n", ex);
    } while(x>=1);

    printf("Kraj programa - uneseni je broj manji od 1\n");

    return 0;
}
