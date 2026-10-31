#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void) {
    char s[200],key[100]; int j=0;
    printf("Enter message: "); fgets(s,sizeof(s),stdin);
    printf("Enter keyword: "); scanf("%99s",key);
    int len=(int)strlen(key);
    for(int i=0;s[i];i++) if(isalpha((unsigned char)s[i])) {
        int base=isupper((unsigned char)s[i])?'A':'a';
        int shift=toupper((unsigned char)key[j%len])-'A';
        s[i]=(char)(base+(s[i]-base+shift)%26); j++;
    }
    printf("Encrypted: %s",s);
    return 0;
}
