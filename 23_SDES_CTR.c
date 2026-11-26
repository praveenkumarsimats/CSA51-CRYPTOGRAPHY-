#include <stdio.h>
int main(void){
 unsigned char p[]={0x01,0x02,0x04},key=0x5D,c[3];
 puts("Toy CTR example (one-byte toy keystream; not standard S-DES):");
 for(int i=0;i<3;i++){unsigned char counter=(unsigned char)i;unsigned char stream=(unsigned char)(counter^key);c[i]=p[i]^stream;printf("C%d = %02X\n",i,c[i]);}
 puts("CTR decryption XORs the same counter keystream with ciphertext.");
 return 0;
}
