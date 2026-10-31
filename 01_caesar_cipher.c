#include <stdio.h>
#include <ctype.h>
int main(void) {
    char s[200]; int k;
    printf("Enter message: "); fgets(s,sizeof(s),stdin);
    printf("Enter key (1-25): "); scanf("%d",&k); k=(k%26+26)%26;
    for(int i=0;s[i];i++)
        if(isalpha((unsigned char)s[i]))
            s[i]=(char)(isupper((unsigned char)s[i])?'A':'a')+
                 (s[i]-(isupper((unsigned char)s[i])?'A':'a')+k)%26;
    printf("Encrypted: %s",s);
    return 0;
}
