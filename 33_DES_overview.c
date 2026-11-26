#include <stdio.h>
int main(void){
 puts("DES specification summary:");
 puts("- 64-bit plaintext block and 64-bit ciphertext block");
 puts("- 56 effective key bits (64 input bits including 8 parity bits)");
 puts("- 16 Feistel rounds; decryption uses round keys in reverse order");
 puts("DES is obsolete and vulnerable to brute-force search. Use AES for real applications.");
 puts("This short program reports the algorithm parameters; use a vetted crypto library for a full DES implementation.");
 return 0;
}
