#include <stdio.h>
#include <stdlib.h>

    /*Napisati program u programskom
jeziku C koji uèitava prirodne brojeve a i b (a<b),
a zatim pronalazi i ispisuje brojeve iz segmenta
[a,b] takve da je suma delilaca broja parna.
Prilikom raèunanja sume delilaca u obzir se ne
uzima dati broj. Na primer, suma delilaca broja 12
je parna, jer je: 1+2+3+4+6=16  */

int main()
{
    int a, b;
    do {
        printf("Unesi opseg! ");
        scanf("%d %d", &a, &b);
    }
    while(a<=0 || b<=0 || b<=a);


    for(int i=a; i<=b; i++) {
        int sumD=0;
        for(int j=1; j<=i/2; j++)   {
            if(i%j==0)  {
                sumD+=j;
            }
        }
        if(sumD%2==0){
        printf("Suma djelilaca broja %d je parna\n", i);
        }

}
    return 0;
}
