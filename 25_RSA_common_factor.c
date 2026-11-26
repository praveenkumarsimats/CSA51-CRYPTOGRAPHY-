#include <stdio.h>
long long gcd(long long a,long long b){while(b){long long t=a%b;a=b;b=t;}return a;}
int main(void){
 long long n,m;printf("Enter RSA modulus n and known plaintext block m: ");
 if(scanf("%lld%lld",&n,&m)!=2)return 1;
 long long g=gcd(n,m);printf("gcd(m,n) = %lld\n",g);
 if(g>1&&g<n)printf("Factorization exposed: p=%lld, q=%lld\n",g,n/g);
 else puts("No nontrivial common factor found; this information gives no factorization.");
 return 0;
}
