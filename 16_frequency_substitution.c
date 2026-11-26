#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 10000
const double f[26]={8.2,1.5,2.8,4.3,12.7,2.2,2.0,6.1,7.0,0.15,0.77,4.0,2.4,6.7,7.5,1.9,0.095,6.0,6.3,9.1,2.8,0.98,2.4,0.15,2.0,0.074};
int main(void){
 char s[N],out[N]; int top=10, cnt[26]={0},map[26],used[26]={0};
 printf("Enter ciphertext (one line): "); if(!fgets(s,sizeof s,stdin)) return 1;
 printf("How many candidates? "); if(scanf("%d",&top)!=1||top<1) top=10;
 for(int i=0;s[i];i++) if(isalpha((unsigned char)s[i])) cnt[toupper((unsigned char)s[i])-'A']++;
 for(int i=0;i<26;i++){int b=-1;for(int j=0;j<26;j++)if(!used[j]&&(b<0||cnt[j]>cnt[b]))b=j;map[b]=i;used[b]=1;}
 puts("\nApproximate plaintext (frequency mapping):");
 for(int i=0;s[i];i++){if(isalpha((unsigned char)s[i])){char c=(char)('A'+map[toupper((unsigned char)s[i])-'A']);out[i]=islower((unsigned char)s[i])?tolower(c):c;}else out[i]=s[i];}
 out[strlen(s)]='\0'; puts(out);
 printf("\nHeuristic output: 1 candidate shown (requested top %d). A robust substitution solver needs n-gram scoring/search.\n",top);
 return 0;
}
