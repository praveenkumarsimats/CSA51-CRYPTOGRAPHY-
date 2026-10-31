#include <stdio.h>
#include <ctype.h>
int main(void) {
    char s[200], key[]="QWERTYUIOPASDFGHJKLZXCVBNM";
    printf("Enter message: "); fgets(s,sizeof(s),stdin);
    for(int i=0;s[i];i++) {
        if(isupper((unsigned char)s[i])) s[i]=key[s[i]-'A'];
        else if(islower((unsigned char)s[i])) s[i]=(char)(key[s[i]-'a']-'A'+'a');
    }
    printf("Encrypted: %s",s);
    return 0;
}
