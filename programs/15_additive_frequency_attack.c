#include "../common.h"
int main(void){char s[2000];printf("Ciphertext: ");fgets(s,sizeof s,stdin);for(int k=0;k<26;k++){printf("shift %2d: ",k);for(int i=0;s[i];i++)putchar(isalpha((unsigned char)s[i])?'A'+modn(toupper(s[i])-'A'-k,26):s[i]);}puts("Choose the candidate that forms readable English.");}
