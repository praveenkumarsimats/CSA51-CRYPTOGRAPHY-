#include <stdio.h>
int main(void){
 puts("Let T = E_K(X), the CBC-MAC of the one-block message X (with zero IV).");
 puts("For two blocks X || (X XOR T):");
 puts("After block 1, chaining value is T.");
 puts("Second input is X XOR T, so its cipher input is (X XOR T) XOR T = X.");
 puts("The final output is E_K(X) = T. Thus the adversary can construct a two-block message with the same tag.");
 puts("This demonstrates why basic CBC-MAC is unsafe for variable-length messages without length binding.");
 return 0;
}
