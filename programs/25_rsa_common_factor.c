#include "../common.h"
int main(void){long long n,m;printf("Enter RSA modulus n and known plaintext block m: ");scanf("%lld%lld",&n,&m);long long g=gcdn((int)n,(int)m);printf("gcd(m,n)=%lld\n",g);if(g>1&&g<n)printf("Factor found: p=%lld q=%lld\n",g,n/g);else puts("No non-trivial common factor found.");}
