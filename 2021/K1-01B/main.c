#include <stdio.h>
#include <stdlib.h>

    /*  Dijagramom toka predstaviti
algoritam koji uèitava prirodan broj x, a zatim
ispisuje prirodne brojeve iz segmenta [x,2x]
koji imaju barem tri neparna delioca (ne
ukljuèujuæi broj jedan, kao niti dati broj). Na
primer, broj 30 ispunjava dato svojstvo, jer su
neparni delioci datog broja sledeæi brojevi: 3, 5
i 15    */

int main()
{
    int x, brNepD=0, djelilac;
    do {
        printf("Unesi prirodan broj x, faktor segmenta [x, 2x]! ");
        scanf("%d", &x);
    }
    while(x<=0);

    for(int i=x; i<=2*x; i++) {
        brNepD=0;
        for(int j=3; j<=i/2; j++)  {
            if(i%j==0)  {
                if(j%2!=0)  {
                    brNepD++;
            }
        }
    }
            if(brNepD>=3)   {
        printf("Broj %d ispunjava uslov sa bar 3 neparna djelioca!\n", i);}
    }

    return 0;
}
