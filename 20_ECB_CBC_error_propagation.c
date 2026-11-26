#include <stdio.h>
int main(void){
 puts("ECB: a ciphertext error in block C1 affects only decrypted block P1.");
 puts("CBC: P1 is corrupted; the corresponding bit in P2 is flipped; P3 onward is unchanged.");
 puts("a) No blocks beyond P2 are affected by a transmission bit error in C1.");
 puts("b) A source error in plaintext P1 changes C1 and therefore propagates through all later CBC ciphertext blocks.");
 puts("At the receiver, the changed C1 corrupts P1 and flips corresponding bits in P2; later plaintext blocks recover normally.");
 return 0;
}
