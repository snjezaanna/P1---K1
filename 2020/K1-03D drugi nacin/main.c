#include <stdio.h>
#include <math.h>

int main() {
    int n, k, proizvodD, i;

    // U�itavanje broja n koji je ve�i od 100
    do {
        printf("Unesi prirodan broj n (n > 100): ");
        scanf("%d", &n);
    } while (n <= 100);

    // Petlja za k - tra�imo broj k za koji proizvod delioca bude ve�i od n
    k = 1;
    int found = 0;  // Ova promenljiva kontroli�e kada �emo iza�i iz petlje

    // Nastavljamo dok ne na�emo odgovaraju�i broj k
    while (found == 0) {  // Spoljna petlja koja se zavr�ava kada se na�e broj k
        proizvodD = 1;  // Po�etna vrednost proizvoda delioca

        // Petlja za delioce broja k
        for (i = 1; i <= sqrt(k); i++) {
            if (k % i == 0) {
                proizvodD *= i;  // Dodaj delilac i
                if (i != k / i) {
                    proizvodD *= (k / i);  // Dodaj komplementarni delilac
                }
            }
        }

        // Provera da li je proizvod delioca ve�i od n
        if (proizvodD > n) {
            printf("Trazeni broj je: %d\n", k);
            found = 1;  // Postavljamo found na 1 da bi zavr�ili petlju
        } else {
            k++;  // Uve�avamo k i ponavljamo proces
        }
    }

    return 0;
}
