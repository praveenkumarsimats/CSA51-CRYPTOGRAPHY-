#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){
 char s[2048];printf("Enter additive-cipher ciphertext: ");if(!fgets(s,sizeof s,stdin))return 1;
 puts("All 26 possible plaintexts, ordered by a simple English letter-frequency score:");
 const double freq[26]={8.2,1.5,2.8,4.3,12.7,2.2,2,6.1,7,0.15,0.77,4,2.4,6.7,7.5,1.9,0.095,6,6.3,9.1,2.8,0.98,2.4,0.15,2,0.074};
 double score[26];for(int k=0;k<26;k++){score[k]=0;for(int i=0;s[i];i++)if(isalpha((unsigned char)s[i])){int c=toupper((unsigned char)s[i])-'A';score[k]+=freq[(c-k+26)%26];}}
 for(int rank=0;rank<26;rank++){int best=-1;for(int k=0;k<26;k++)if(score[k]>=0&&(best<0||score[k]>score[best]))best=k;
 printf("Shift %2d: ",best);for(int i=0;s[i]&&s[i]!='\n';i++)if(isalpha((unsigned char)s[i]))putchar('A'+(toupper((unsigned char)s[i])-'A'-best+26)%26);else putchar(s[i]);puts("");score[best]=-1;}
 return 0;
}
