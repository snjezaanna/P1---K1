#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, n, Sp, Sn, k;
    do {
        printf("Unesi gornju granicu opsega - a, i n-ti clan - n ");
        scanf("%d %d", &a, &n);
    }
    while (a<9 || n>a);
    for(int i=1; i<=n; i++) {
        Sp=0;
        Sn=0;
        int temp=i;
        while(temp>0)   {
            k=temp%10;
            if (k%2==0) {
                Sp+=k;
            }
            else {
                Sn+=k;
            }
            temp/=10;
        }
        if(Sp==Sn)  {
            printf("Broj %d pripada nizu\n", i);
        }
    }
    return 0;
}
