#include <stdio.h>
int main(void){
 puts("Hill cipher known-plaintext attack (2x2 case):");
 puts("Choose two plaintext blocks P1=(p1,p2), P2=(p3,p4) and obtain ciphertext C1,C2.");
 puts("Form P=[P1 P2] and C=[C1 C2]. Since C=K P (mod 26), K=C * inverse(P) (mod 26),");
 puts("provided det(P) is relatively prime to 26. For modulus 26, gcd(det(P),26)=1 is required.");
 puts("A chosen-plaintext attacker can choose P as the identity matrix, directly revealing K.");
 return 0;
}
