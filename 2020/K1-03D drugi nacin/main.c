#include <stdio.h>
#include <math.h>

int main() {
    int n, k, proizvodD, i;

    // Uèitavanje broja n koji je veæi od 100
    do {
        printf("Unesi prirodan broj n (n > 100): ");
        scanf("%d", &n);
    } while (n <= 100);

    // Petlja za k - tražimo broj k za koji proizvod delioca bude veæi od n
    k = 1;
    int found = 0;  // Ova promenljiva kontroliše kada æemo izaæi iz petlje

    // Nastavljamo dok ne naðemo odgovarajuæi broj k
    while (found == 0) {  // Spoljna petlja koja se završava kada se naðe broj k
        proizvodD = 1;  // Poèetna vrednost proizvoda delioca

        // Petlja za delioce broja k
        for (i = 1; i <= sqrt(k); i++) {
            if (k % i == 0) {
                proizvodD *= i;  // Dodaj delilac i
                if (i != k / i) {
                    proizvodD *= (k / i);  // Dodaj komplementarni delilac
                }
            }
        }

        // Provera da li je proizvod delioca veæi od n
        if (proizvodD > n) {
            printf("Trazeni broj je: %d\n", k);
            found = 1;  // Postavljamo found na 1 da bi završili petlju
        } else {
            k++;  // Uveæavamo k i ponavljamo proces
        }
    }

    return 0;
}
