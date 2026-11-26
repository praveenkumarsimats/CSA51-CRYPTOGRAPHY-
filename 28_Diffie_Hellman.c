#include <stdio.h>
long long modpow(long long a,long long e,long long m){long long r=1;while(e){if(e&1)r=r*a%m;a=a*a%m;e>>=1;}return r;}
int main(void){
 long long q,a,x,y;printf("Enter prime q, generator a, Alice secret x, Bob secret y: ");
 if(scanf("%lld%lld%lld%lld",&q,&a,&x,&y)!=4)return 1;
 long long A=modpow(a,x,q),B=modpow(a,y,q);
 printf("Alice sends %lld; Bob sends %lld\n",A,B);
 printf("Shared keys: Alice=%lld Bob=%lld\n",modpow(B,x,q),modpow(A,y,q));
 puts("Using x^a instead of a^x does not give the standard DH construction and does not generally yield matching shared keys.");
 puts("Unauthenticated DH is vulnerable to a man-in-the-middle attack. Use authenticated DH (certificates/signatures).");
 return 0;
}
