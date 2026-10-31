#include <stdio.h>
int mod(int x){x%=26;return x<0?x+26:x;}
int main(void) {
    /* P columns: (7,11) and (4,15); C = K*P mod 26 for K=[9 4;5 7]. */
    int P[2][2]={{7,4},{11,15}}, C[2][2]={{3,18},{8,21}};
    int det=mod(P[0][0]*P[1][1]-P[0][1]*P[1][0]), inv=-1;
    for(int i=0;i<26;i++)if(mod(det*i)==1)inv=i;
    if(inv<0){puts("Plaintext matrix is not invertible.");return 0;}
    int Q[2][2]={{mod(P[1][1]*inv),mod(-P[0][1]*inv)},{mod(-P[1][0]*inv),mod(P[0][0]*inv)}};
    int K[2][2]={{0,0},{0,0}};
    for(int i=0;i<2;i++)for(int j=0;j<2;j++)for(int x=0;x<2;x++)K[i][j]=mod(K[i][j]+C[i][x]*Q[x][j]);
    printf("Recovered key matrix:\\n%d %d\\n%d %d\\n",K[0][0],K[0][1],K[1][0],K[1][1]);
    return 0;
}
