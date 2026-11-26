#include <stdio.h>
#include <string.h>
/* CBC concept demonstration; toy 8-bit block operation, not standard S-DES. */
int main(void){
 unsigned char iv=0xAA,p[2]={0x01,0x23},key=0x5D,c[2],prev=iv;
 for(int i=0;i<2;i++){c[i]=(unsigned char)(p[i]^prev^key);prev=c[i];}
 printf("Toy CBC ciphertext: %02X %02X\n",c[0],c[1]);
 prev=iv;for(int i=0;i<2;i++){unsigned char d=(unsigned char)(c[i]^key^prev);printf("Decrypted block: %02X\n",d);prev=c[i];}
 puts("The assignment's S-DES test vector requires the full S-DES permutations and key schedule; this file illustrates CBC chaining only.");
 return 0;
}
