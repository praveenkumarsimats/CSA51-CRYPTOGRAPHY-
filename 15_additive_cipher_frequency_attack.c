#include <stdio.h>
#include <ctype.h>
int main(void) {
    char s[500]; int score[26]; const char *freq="ETAOINSHRDLCUMWFGYPBVKJXQZ";
    printf("Enter ciphertext (no spaces): "); scanf("%499s",s);
    for(int k=0;k<26;k++){
        int count[26]={0};
        for(int i=0;s[i];i++)if(isalpha((unsigned char)s[i]))count[(toupper((unsigned char)s[i])-'A'-k+26)%26]++;
        score[k]=0;
        for(int r=0;r<26;r++)score[k]+=count[freq[r]-'A']*(26-r);
    }
    for(int n=0;n<10;n++){
        int best=-1;
        for(int k=0;k<26;k++)if(score[k]>=0&&(best<0||score[k]>score[best]))best=k;
        if(best<0)break;
        printf("Key %d: ",best);
        for(int i=0;s[i];i++)if(isalpha((unsigned char)s[i]))putchar('A'+(toupper((unsigned char)s[i])-'A'-best+26)%26);else putchar(s[i]);
        putchar('\\n'); score[best]=-1;
    }
    return 0;
}
