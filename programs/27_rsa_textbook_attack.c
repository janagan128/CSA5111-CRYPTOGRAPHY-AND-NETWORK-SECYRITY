#include "../common.h"
int main(void){long long n,e,c;printf("Enter public n, e and one ciphertext block: ");scanf("%lld%lld%lld",&n,&e,&c);puts("Brute-force the tiny 0..25 alphabet message space:");for(int m=0;m<26;m++)if(powmodn(m,e,n)==c)printf("Possible plaintext integer: %d (%c)\n",m,'A'+m);puts("Textbook RSA is deterministic and leaks patterns; use randomized padded RSA such as OAEP.");}
