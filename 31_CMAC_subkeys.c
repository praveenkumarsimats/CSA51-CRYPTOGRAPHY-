#include <stdio.h>
#include <stdint.h>
int main(void){
 puts("CMAC reduction constants:");
 puts("64-bit block: Rb = 0x1B (XOR into the least-significant byte).");
 puts("128-bit block: Rb = 0x87 (XOR into the least-significant byte).");
 puts("Left shift multiplies the block value by x in GF(2^n).");
 puts("If the original most-significant bit was 1, the shift overflowed; XOR Rb reduces the result modulo the block-size polynomial.");
 puts("K1 = shift(E_K(0)); K2 = shift(K1), applying Rb conditionally at each step.");
 return 0;
}
