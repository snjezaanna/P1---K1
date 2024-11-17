#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    /*Napisati program u programskom
jeziku C koji uèitava prirodne brojeve n, a i b
(a<b), a zatim pronalazi i ispisuje prirodne brojeve
manje od n takve da je proizvod delilaca datog
broja broj iz segmenta [a,b]. Na primer, proizvod
delilaca broja 12 je:
1*2*3*4*6*12=1728.  */

int main()
{
    int n, a, b;
    do  {
        printf("Unesi prirodan broj n, kao i opseg [a, b] tim redom! ");
        scanf("%d %d %d", &n, &a, &b);
    }
    while(n<=0 || a<=0 || b<=0 || b<=a);    // mozes i postaviti n<=1, jer ne postoje brojevi manji od 1, a da su prirodni

    if(n==1)    {
        printf("Ne postoje prirodni brojevi manji od 1!\n");
    }

    for(int i=1; i<n; i++)  {
        int proizvD=1;
        for(int j=1; j<=sqrt(i); j++)  {
            if(i%j==0)  {
                proizvD*=j;
            if(j!=i/j) {      // avoid multiplying the same divisor twice if j==i/j
                proizvD*=i/j;
            }
        }
    }
        if(proizvD>=a && proizvD<=b)    {
        printf("Proizvod djelilaca broja %d jeste unutar opsega\n", i);
        }
    }



    return 0;
}
