#include "../common.h"
int main(void){char s[500],key[100];printf("Text: ");fgets(s,sizeof s,stdin);printf("Key: ");scanf("%99s",key);upper_letters(key);int j=0;for(int i=0;s[i];i++)if(isalpha((unsigned char)s[i])){char b=isupper((unsigned char)s[i])?'A':'a';s[i]=(char)(b+modn(s[i]-b+(toupper(key[j++%strlen(key)])-'A'),26));}printf("Ciphertext: %s",s);}
