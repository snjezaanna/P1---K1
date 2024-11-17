#include <stdio.h>
#include <stdlib.h>

    /*  Dijagramom toka predstaviti
algoritam koji uèitava prirodne brojeve a i b
(a<b), a zatim ispisuje prirodne brojeve iz
segmenta [a,b] koji imaju barem pet delilaca
(ne ukljuèujuæi broj jedan, kao niti dati broj).
Na primer, broj 24 ispunjava dato svojstvo, jer
su delioci datog broja sledeæi brojevi: 2, 3, 4, 6,
8 i 12  */

int main()
{
    int a, b, brD=0;
    do {
        printf("Unesi opseg [a, b]! ");
        scanf("%d %d", &a, &b);
    }
    while(a<=0 || b<=0 || b<=a);

    for(int i=1; i<=b; i++) {
        int temp=i;
        brD=0;
        for(int j=2; j<=temp/2; j++)  {
            if(temp%j==0)
            {
                brD++;
            }
        }
        if(brD>=5)  {
            printf("Broj djelilaca za broj %d je veci ili jednak 5!\n", i);
        }
    }

    return 0;
}
