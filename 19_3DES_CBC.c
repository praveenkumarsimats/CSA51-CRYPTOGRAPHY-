#include <stdio.h>
#include <string.h>
/* CBC demonstration with a reversible toy 8-byte block transform (NOT DES/3DES). */
void enc(unsigned char *b,const unsigned char *k){for(int i=0;i<8;i++)b[i]^=k[i];}
int main(void){
 unsigned char key[8]="Key12345",iv[8]="InitVect",p[32]="CBC mode demo",c[32],prev[8];
 int n=((int)strlen((char*)p)/8+1)*8; memcpy(prev,iv,8);
 for(int off=0;off<n;off+=8){unsigned char b[8]={0};for(int j=0;j<8;j++)b[j]=p[off+j];for(int j=0;j<8;j++)b[j]^=prev[j];enc(b,key);memcpy(c+off,b,8);memcpy(prev,b,8);}
 printf("Toy CBC ciphertext (%d bytes): ",n);for(int i=0;i<n;i++)printf("%02X",c[i]);puts("");
 puts("Security: choose 3DES over DES. Performance: DES is faster; 3DES is slower.");
 puts("Modern recommendation: AES rather than either DES or 3DES.");
 return 0;
}
