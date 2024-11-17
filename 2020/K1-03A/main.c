#include <stdio.h>
#include <stdlib.h>

/*  Napisati program u programskom
jeziku C koji uèitava prirodne brojeve x i y (x<y), a
zatim pronalazi i ispisuje brojeve iz segmenta [x,y]
takve da je suma delilaca broja veæa od samog
broja. Prilikom raèunanja sume delilaca u obzir se
ne uzima dati broj. Na primer, suma delilaca broja
12 je: 1+2+3+4+6=16.    */


int main()
{
    int x, y, sumD=0;
    do {
        printf("Unesi opseg [x,y] ");
        scanf("%d %d", &x, &y);
    }
    while(x<=0 || y<=0 || x>=y);
       for(int j=x; j<=y; j++)  {
            sumD=0;
        for(int i=1; i<=j/2; i++)   {
            if(j%i==0)  {
                sumD+=i;
            }
        }
        if(sumD>j)  {
        printf("Suma je: %d, za broj %d\n", sumD, j);
        }
       }
    return 0;
}
