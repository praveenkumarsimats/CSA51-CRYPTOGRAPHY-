#include <stdio.h>
int main(void) {
    char p[]="SENDMOREMONEY", target[]="CASHNOTNEEDED", c[14];
    int key[]={9,0,1,7,23,15,21,14,11,11,2,8,9};
    for(int i=0;i<13;i++)c[i]=(p[i]-'A'+key[i])%26+'A';
    c[13]='\\0';
    printf("Ciphertext: %s\\nNew key for CASHNOTNEEDED: ",c);
    for(int i=0;i<13;i++)printf("%d ",(c[i]-target[i]+26)%26);
    puts("");
    return 0;
}
