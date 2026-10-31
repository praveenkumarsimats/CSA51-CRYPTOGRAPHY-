#include <stdio.h>
#include <ctype.h>
int gcd(int a,int b){return b?gcd(b,a%b):a;}
int main(void) {
    char s[200]; int a,b;
    printf("Enter message: "); fgets(s,sizeof(s),stdin);
    printf("Enter a and b: "); scanf("%d%d",&a,&b);
    a=(a%26+26)%26; b=(b%26+26)%26;
    if(gcd(a,26)!=1){printf("Invalid a: gcd(a,26) must be 1.\\n");return 0;}
    for(int i=0;s[i];i++) if(isalpha((unsigned char)s[i])) {
        int base=isupper((unsigned char)s[i])?'A':'a';
        s[i]=(char)(base+(a*(s[i]-base)+b)%26);
    }
    printf("Encrypted: %s",s);
    printf("\\nAllowed a: 1,3,5,7,9,11,15,17,19,21,23,25; b: any integer.\\n");
    return 0;
}
