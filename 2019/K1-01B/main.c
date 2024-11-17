#include <stdio.h>
#include <stdlib.h>


long long factorial(int n)  {
        long long result=1;
        for(int i=1; i<=n; i++) {
            result*=i;
        }
    return result;
    }
int main()
{
    int n, k, S=0, l;
    do {
        printf("Unesi k i n! ");
        scanf("%d %d", &k, &n);
    }
    while(k<1);
    for(int i=1; i<=k; i++) {
            int value=2*k-1;
        l=pow((-1),k)*(pow((2*k), n))/(factorial(value));
        S+=l;
    }
    printf("Suma prvih k clanova je %d", S);
    return 0;
}
