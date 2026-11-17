#include "../common.h"
int main(void){char s[500];int k;printf("Text: ");fgets(s,sizeof s,stdin);printf("Shift (1-25): ");scanf("%d",&k);k=modn(k,26);for(int i=0;s[i];i++)if(isalpha((unsigned char)s[i])){char b=isupper((unsigned char)s[i])?'A':'a';s[i]=(char)(b+modn(s[i]-b+k,26));}printf("Ciphertext: %s",s);return 0;}
