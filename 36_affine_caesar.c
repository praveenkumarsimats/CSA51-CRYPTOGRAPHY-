#include <stdio.h>
#include <string.h>
#include <ctype.h>
int gcd(int a,int b){while(b){int t=a%b;a=b;b=t;}return a;}
int main(void){
 char s[512];int a,b;printf("Enter a and b: ");if(scanf("%d%d",&a,&b)!=2)return 1;getchar();
 if(gcd(a,26)!=1){puts("Invalid: a must be relatively prime to 26 for a one-to-one cipher.");return 0;}
 printf("Plaintext: ");if(!fgets(s,sizeof s,stdin))return 1;
 for(int i=0;s[i]&&s[i]!='\n';i++)if(isalpha((unsigned char)s[i])){int p=toupper((unsigned char)s[i])-'A';putchar('A'+((a*p+b)%26));}else putchar(s[i]);puts("");
 return 0;
}
