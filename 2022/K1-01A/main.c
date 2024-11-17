#include <stdio.h>
#include <stdlib.h>

    /*  Dijagramom toka predstaviti
algoritam koji uèitava prirodne brojeve a i b
(a<b), a zatim ispisuje prirodne brojeve iz
segmenta [a,b] èiji binarni ekvivalent ima
barem tri jedinice. Na primer, broj 11 ispunjava
dato svojstvo, jer je 11=10112  */

int main()
{
    int a, b, kecevi=0;
    do {
        printf("Unesi opseg [a, b]! ");
        scanf("%d %d", &a, &b);
    }
    while(a<=0 || b<=0 || b<=a);

    for(int i=a; i<=b; i++) {
        int temp=i; kecevi=0;
        while (temp>0)  {         // moze se staviti i uslov temp!=0
            if(temp%2==1)  {
                kecevi++;
            }
            temp/=2;             // odbacivanje najlakse cifre u BIN
        }
        if(kecevi>=3)  {
            printf("Broj %d ima vise od 3 keca u BIN!\n", i);
        }
    }

    return 0;
}
