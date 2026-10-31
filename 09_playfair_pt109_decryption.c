#include <stdio.h>
#include <string.h>
int main(void) {
    char key[]="ROYALNEWZEALANDNAVY";
    char ct[]="KXJEYUREBEZWEHEWRYTUHEYFSKREHEGOYFIWTTTUOLKSYCAJPOBOTEIZONTXBYBNTGONE YCUZWRGDSONSXBOUYWRHEBAAHYUSEDQ";
    char m[5][5]; int used[26]={0},k=0;
    used['J'-'A']=1;
    for(int i=0;key[i];i++){int x=key[i]-'A';if(!used[x]){m[k/5][k%5]=key[i];used[x]=1;k++;}}
    for(int i=0;i<26;i++)if(!used[i]){m[k/5][k%5]='A'+i;k++;}
    printf("Plaintext: ");
    for(int i=0;ct[i];i++) if(ct[i]>='A'&&ct[i]<='Z') {
        int j=i+1; while(ct[j] && !(ct[j]>='A'&&ct[j]<='Z')) j++;
        if(!ct[j]) break;
        char a=ct[i],b=ct[j]; int r1=0,c1=0,r2=0,c2=0;
        for(int r=0;r<5;r++)for(int c=0;c<5;c++){if(m[r][c]==a)r1=r,c1=c;if(m[r][c]==b)r2=r,c2=c;}
        if(r1==r2) printf("%c%c",m[r1][(c1+4)%5],m[r2][(c2+4)%5]);
        else if(c1==c2) printf("%c%c",m[(r1+4)%5][c1],m[(r2+4)%5][c2]);
        else printf("%c%c",m[r1][c2],m[r2][c1]);
        i=j;
    }
    return 0;
}
