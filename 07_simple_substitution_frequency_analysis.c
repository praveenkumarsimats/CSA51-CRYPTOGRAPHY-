#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void) {
    char s[1000], map[27];
    int count[26]={0};
    printf("Enter ciphertext (one line): ");
    fgets(s,sizeof(s),stdin);
    for(int i=0;s[i];i++)
        if(isalpha((unsigned char)s[i])) count[toupper((unsigned char)s[i])-'A']++;
    printf("\\nLetter frequencies:\\n");
    for(int i=0;i<26;i++) printf("%c : %d\\n",'A'+i,count[i]);
    printf("\\nEnter 26-letter decryption mapping (cipher A-Z -> plain A-Z): ");
    scanf("%26s",map);
    if(strlen(map)!=26){printf("Mapping must contain 26 letters.\\n");return 0;}
    printf("Decrypted: ");
    for(int i=0;s[i];i++) {
        if(isalpha((unsigned char)s[i])) {
            int x=toupper((unsigned char)s[i])-'A';
            char c=toupper((unsigned char)map[x]);
            putchar(islower((unsigned char)s[i])?tolower((unsigned char)c):c);
        } else putchar(s[i]);
    }
    return 0;
}
