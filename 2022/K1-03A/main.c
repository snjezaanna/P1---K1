#include <stdio.h>
#include <stdlib.h>

    /*  Napisati program u programskom
jeziku C (dozvoljeno je korištenje funkcija samo
iz stdio.h) koji uèitava prirodne brojeve n i k
(k<=10), a zatim ispisuje vrednost sledeæe
sume:   sumFrom (i=1 to n) of sp(i^k)
gde je sp(t) suma parnih cifara broja t. Na
primer, sp(128)=2+8=10. */

int main()
{
    int n, k, sp=0;
    do {
        printf("Unesi prirodne brojeve n i k takve da je k<=10! ");
        scanf("%d %d", &n, &k);
    }
    while(n<=0 || k<=0 || k>10);


    for(int i=1; i<=n; i++) {
        int temp=i;
        for(int j=2; j<=k; j++) {
            temp=temp*i;
        }
        int temp_sum=0;

        while(temp!=0)  {
            if(temp%2==0)   {
                temp_sum+=(temp%10);
            }
            temp/=10;
        }
        sp+=temp_sum;
    }
    printf("%d", sp);



    return 0;
}
