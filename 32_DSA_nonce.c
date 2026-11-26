#include <stdio.h>
int main(void){
 puts("DSA uses a fresh per-signature secret nonce k, so signing the same message twice normally produces different signatures.");
 puts("This reduces direct signature repetition but makes nonce security critical: if k is reused or predictable, the private key can be recovered.");
 puts("RSA signatures with deterministic encoding can repeat for the same message and key; secure RSA-PSS uses randomness.");
 puts("Use a cryptographically secure nonce generator (or a vetted deterministic DSA/ECDSA nonce procedure).");
 return 0;
}
