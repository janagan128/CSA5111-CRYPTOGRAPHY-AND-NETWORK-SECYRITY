#include "../common.h"
int main(void){char s[500];int a,b;printf("Text: ");fgets(s,sizeof s,stdin);printf("a b: ");scanf("%d%d",&a,&b);if(gcdn(a,26)!=1){puts("Invalid a: gcd(a,26) must be 1. b may be any integer.");return 1;}for(int i=0;s[i];i++)if(isalpha((unsigned char)s[i])){char z=isupper((unsigned char)s[i])?'A':'a';s[i]=(char)(z+modn(a*(s[i]-z)+b,26));}printf("Ciphertext: %s",s);}
