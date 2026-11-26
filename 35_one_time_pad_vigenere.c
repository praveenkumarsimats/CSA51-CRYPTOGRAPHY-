#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){
 char p[512];int k[512],n=0;printf("Plaintext (letters only): ");if(!fgets(p,sizeof p,stdin))return 1;
 for(int i=0;p[i]&&p[i]!='\n';i++)if(isalpha((unsigned char)p[i])){printf("Key shift for %c (0-25): ",p[i]);if(scanf("%d",&k[n])!=1)return 1;k[n]%=26;n++;}
 int j=0;printf("Ciphertext: ");for(int i=0;p[i]&&p[i]!='\n';i++)if(isalpha((unsigned char)p[i])){char b=(char)('A'+(toupper((unsigned char)p[i])-'A'+k[j++])%26);putchar(b);}else putchar(p[i]);puts("");
 puts("For a true one-time pad, shifts must be uniformly random, secret, message-length, and never reused.");
 return 0;
}
