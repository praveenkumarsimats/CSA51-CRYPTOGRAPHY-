#include <stdio.h>
#include <ctype.h>
int main(void) {
    char m[5][5]={"MFHIK","UNOPQ","ZVWXY","ELARG","DSTBC"};
    char s[200],p[200]; int n=0;
    printf("Enter message: "); fgets(s,sizeof(s),stdin);
    for(int i=0;s[i];i++) if(isalpha((unsigned char)s[i])) p[n++]=toupper((unsigned char)s[i]);
    printf("Encrypted: ");
    for(int i=0;i<n;) {
        char a=p[i++],b;
        if(i==n)b='X'; else if(p[i]==a)b='X'; else b=p[i++];
        int r1=0,c1=0,r2=0,c2=0;
        for(int r=0;r<5;r++)for(int c=0;c<5;c++){if(m[r][c]==a)r1=r,c1=c;if(m[r][c]==b)r2=r,c2=c;}
        if(r1==r2)printf("%c%c",m[r1][(c1+1)%5],m[r2][(c2+1)%5]);
        else if(c1==c2)printf("%c%c",m[(r1+1)%5][c1],m[(r2+1)%5][c2]);
        else printf("%c%c",m[r1][c2],m[r2][c1]);
    }
    return 0;
}
