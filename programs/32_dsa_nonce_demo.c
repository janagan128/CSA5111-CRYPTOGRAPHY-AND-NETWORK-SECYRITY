#include "../common.h"
int main(void){long long p=23,q=11,g=4,x=3,h=7;for(int k=2;k<=5;k++){long long r=powmodn(g,k,p)%q,s=(invn(k,(int)q)*(h+x*r))%q;printf("nonce k=%d -> signature (r=%lld,s=%lld)\n",k,r,s);}puts("Different per-message nonces normally produce different DSA signatures. Never reuse or reveal k.");}
