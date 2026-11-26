#include <stdio.h>
/* DES rotation schedule: decryption uses round keys K16 ... K1. */
int main(void){
 const int shifts[16]={1,1,2,2,2,2,2,2,1,2,2,2,2,2,2,1};
 unsigned int C=0x0abcdef, D=0x0123456; /* illustrative 28-bit halves */
 unsigned long long K[16];
 puts("Illustrative DES round-key schedule (48-bit keys are represented by sample values).");
 for(int r=0;r<16;r++){
   int n=shifts[r]; C=((C<<n)|(C>>(28-n)))&0x0fffffff;
   D=((D<<n)|(D>>(28-n)))&0x0fffffff;
   K[r]=(((unsigned long long)C<<28)|D)&0xffffffffffffULL;
 }
 puts("Decryption order:");
 for(int r=15;r>=0;r--) printf("K%-2d = %012llX\n",r+1,K[r]);
 puts("Use these keys in reverse round order: K16, K15, ..., K1.");
 return 0;
}
