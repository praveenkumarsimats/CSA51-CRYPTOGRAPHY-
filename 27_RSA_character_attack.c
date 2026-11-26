#include <stdio.h>
int main(void){
 puts("No. Encrypting each alphabetic value separately with textbook RSA is deterministic and insecure.");
 puts("Most efficient attack: build a codebook by computing E(0), E(1), ..., E(25), then match every ciphertext block to its letter.");
 puts("Repeated plaintext letters produce repeated ciphertext blocks, revealing patterns even without factoring n.");
 puts("Use randomized, secure padding such as RSA-OAEP; do not encrypt characters independently.");
 return 0;
}
