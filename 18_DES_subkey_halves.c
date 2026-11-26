#include <stdio.h>
#include <stdint.h>
int main(void){
 uint32_t left=0x0ABCDEF, right=0x0123456;
 puts("DES PC-2 selects 24 bits from each 28-bit rotated half.");
 puts("The halves are disjoint: C contains original key positions 1-28; D contains 29-56.");
 for(int r=1;r<=16;r++){
   int n=(r==1||r==2||r==9||r==16)?1:2;
   left=((left<<n)|(left>>(28-n)))&0x0fffffff;
   right=((right<<n)|(right>>(28-n)))&0x0fffffff;
   uint64_t joined=((uint64_t)left<<28)|right;
   /* Illustrative 48-bit extraction; actual DES uses the PC-2 permutation table. */
   uint64_t sub=(joined>>8)&0xffffffffffffULL;
   printf("Round %2d: C=%07X D=%07X sample 48-bit selection=%012llX\n",r,left,right,(unsigned long long)sub);
 }
 return 0;
}
