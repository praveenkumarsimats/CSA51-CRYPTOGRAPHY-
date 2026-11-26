#include <stdio.h>
long long gcd(long long a,long long b){while(b){long long t=a%b;a=b;b=t;}return a;}
long long inv(long long a,long long m){long long t=0,nt=1,r=m,nr=a;while(nr){long long q=r/nr,x=t-q*nt;t=nt;nt=x;x=r-q*nr;r=nr;nr=x;}return (t%m+m)%m;}
int main(void){
 long long n=3599,e=31,p=0,q=0;for(long long i=2;i*i<=n;i++)if(n%i==0){p=i;q=n/i;break;}
 if(!p){puts("Factorization failed");return 1;}long long phi=(p-1)*(q-1),d=inv(e,phi);
 printf("p=%lld q=%lld\nphi(n)=%lld\nd=%lld\n",p,q,phi,d);
 return 0;
}
