#include "../common.h"
int main(void){long long p=61,q=53,n=p*q,phi=(p-1)*(q-1),e1=17,e2=7;printf("Same modulus n=%lld, phi=%lld\n",n,phi);printf("Old d=%d, new d=%d\n",invn((int)e1,(int)phi),invn((int)e2,(int)phi));puts("If the old private key leaked, an attacker may recover the factorization/phi and compute the new private exponent. Generate a fresh modulus.");}
