#include <stdio.h>
#include <stdlib.h>

    /*  Dijagramom toka predstaviti
algoritam koji uèitava prirodne brojeve n i k, a
zatim ispisuje prirodne brojeve iz segmenta
[1,n] èiji binarni ekvivalent ima k jedinica. Na
primer, traženi brojevi za n=15 i k=3 su 7, 11,
13 i 14 */

int main()
{
    int n, k, kecevi=0;
    do{
        printf("Unesi prirodne brojeve n i k! ");
        scanf("%d %d", &n, &k);
    }
    while(n<=0 || k<=0);

    for(int i=1; i<=n; i++) {
        int temp=i;
        kecevi=0;                    // resetovanje vrijednosti za svaku narednu cifru
        while(temp!=0)  {
            if(temp%2==1) {
                kecevi++;
            }
            temp/=2;
        }
        if(kecevi>=k) {
            printf("Broj %d ima vise od %d jedinice/a u BIN\n", i, k);
        }
    }

    return 0;
}
