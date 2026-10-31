#include <stdio.h>
#include <ctype.h>
int main(void) {
    char s[300],p[300],c[300],d[300]; int n=0;
    int K[2][2]={{9,4},{5,7}}, I[2][2]={{5,12},{15,25}};
    printf("Enter message: "); fgets(s,sizeof(s),stdin);
    for(int i=0;s[i];i++)if(isalpha((unsigned char)s[i]))p[n++]=toupper((unsigned char)s[i]);
    if(n%2)p[n++]='X'; p[n]='\\0';
    for(int i=0;i<n;i+=2){int x=p[i]-'A',y=p[i+1]-'A';c[i]=(K[0][0]*x+K[0][1]*y)%26+'A';c[i+1]=(K[1][0]*x+K[1][1]*y)%26+'A';}
    c[n]='\\0';
    for(int i=0;i<n;i+=2){int x=c[i]-'A',y=c[i+1]-'A';d[i]=(I[0][0]*x+I[0][1]*y)%26+'A';d[i+1]=(I[1][0]*x+I[1][1]*y)%26+'A';}
    d[n]='\\0';
    printf("Ciphertext: %s\\nDecrypted: %s\\n",c,d);
    return 0;
}
