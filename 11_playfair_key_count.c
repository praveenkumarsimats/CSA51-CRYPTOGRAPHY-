#include <stdio.h>
#include <math.h>
int main(void) {
    long double n=1;
    for(int i=1;i<=25;i++) n*=i;
    printf("Possible keys (25!) = %.0Lf\\n",n);
    printf("Approximate power = 2^%.2Lf\\n",log2l(n));
    printf("Effectively unique (simplified 25! / 25 = 24!) = %.0Lf\\n",n/25);
    printf("Approximate unique power = 2^%.2Lf\\n",log2l(n/25));
    return 0;
}
