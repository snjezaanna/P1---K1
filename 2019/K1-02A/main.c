#include <stdio.h>
#include <stdlib.h>


/*  Dijagramom toka predstaviti
algoritam koji uèitava prirodne brojeve a i b (a<b),
a zatim pronalazi i ispisuje brojeve iz segmenta
[a,b] takve da je suma parnih cifara broja jednaka
sumi neparnih cifara. Na primer, za broj 143 je
ispunjen dati uslov jer je 1+3=4.   */

int main()
{
    int a,b,n, Sp, Sn;
    do {
        scanf("%d %d", &a, &b);
    }
    while(a<=0 || b<=0 || b<=a);
    for(int i=a; i<=b; i++)   {
            Sp=0;
            Sn=0;
            int temp=i;

          while(temp>0)    {
           n=temp%10;
           if(n%2==0)   {
            Sp+=n;
           }
           else {
            Sn+=n;
           }
           temp/=10;
        }

    if(Sp==Sn)  {
        printf("Broju %d je zbir parnih cifara jednaku zbiru neparnih\n", i);
        }
    }
    return 0;
}
