#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char key[]="MONARCHY", text[300], p[300], m[5][5];
    int used[26]={0}, n=0, k=0;
    used['J'-'A']=1;
    for(int i=0;key[i];i++) {
        int x=toupper((unsigned char)key[i])-'A';
        if(x>=0 && x<26 && !used[x]) { m[k/5][k%5]='A'+x; used[x]=1; k++; }
    }
    for(int i=0;i<26;i++) if(!used[i]) { m[k/5][k%5]='A'+i; k++; }
    printf("Enter message: "); fgets(text,sizeof(text),stdin);
    for(int i=0;text[i];i++) if(isalpha((unsigned char)text[i])) {
        char c=toupper((unsigned char)text[i]); p[n++]=(c=='J')?'I':c;
    }
    printf("Encrypted: ");
    for(int i=0;i<n;) {
        char a=p[i++], b;
        if(i==n) b='X';
        else if(p[i]==a) b='X';
        else b=p[i++];
        int r1,c1,r2,c2;
        for(int r=0;r<5;r++) for(int c=0;c<5;c++) {
            if(m[r][c]==a) r1=r,c1=c;
            if(m[r][c]==b) r2=r,c2=c;
        }
        if(r1==r2) printf("%c%c",m[r1][(c1+1)%5],m[r2][(c2+1)%5]);
        else if(c1==c2) printf("%c%c",m[(r1+1)%5][c1],m[(r2+1)%5][c2]);
        else printf("%c%c",m[r1][c2],m[r2][c1]);
        if(i==n && b=='X' && (n%2==1)) break;
    }
    return 0;
}
