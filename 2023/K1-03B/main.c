#include <stdio.h>

/*  Napisati program u programskom
jeziku C (dozvoljeno je kori�tenje funkcija samo
iz stdio.h) koji u�itava prirodne brojeve a, b
(a<b) i k (k<=10), a zatim ispisuje slede�e
vrednosti: e^a, e^(a+0.5), e^(a+1), � , e^(b-0.5), e^b.
Vrednost e^x mo�e da se izra�una kori�tenjem
slede�e formule: e^x=1+x/1!+x^2/2!+...+x^k/n!   */


int main() {
    int a, b, k;
    do {
        printf("Unesite prirodne brojeve a, b (a < b) i k (k <= 10): ");
        scanf("%d %d %d", &a, &b, &k);
    } while (a <= 0 || b <= 0 || a >= b || k > 10 || k <= 0);

    for (double x = a; x <= b; x += 0.5) {
        double suma = 1; // pocetna vrijednost e^x je 1 (za n=0)
        double faktorijal = 1; // pocetni fakt(n!)
        double stepen = 1;     // x^n

        for (int n = 1; n <= k; n++) {
            stepen *= x;          // izracun za x^n
            faktorijal *= n;      // izracun n!
            suma += stepen / faktorijal; // dodavanje sljede�eg �lana reda
        }

        printf("e^%.1f = %.6f\n", x, suma);
    }

    return 0;
}
