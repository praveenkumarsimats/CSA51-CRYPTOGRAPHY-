#include <stdio.h>
int mod(int x){x%=26;return x<0?x+26:x;}
int main(void) {
    /* Clues: most frequent B is assumed to represent E;
       second most frequent U is assumed to represent T. */
    int invA[26], n=0;
    for(int a=1;a<26;a++) {
        int ok=0;
        for(int i=0;i<26;i++) if((a*i)%26==1) ok=1;
        if(!ok) continue;
        /* E(4)=B(1), E(19)=U(20): 15a = 19 (mod 26). */
        for(int b=0;b<26;b++)
            if(mod(a*4+b)==1 && mod(a*19+b)==20) {
                printf("Possible key: a=%d, b=%d\\n",a,b);
                n++;
            }
    }
    if(!n) printf("No key found under these frequency assumptions.\\n");
    return 0;
}
