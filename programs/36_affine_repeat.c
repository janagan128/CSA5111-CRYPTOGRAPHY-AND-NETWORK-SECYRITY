#include "../common.h"
int main(void){int a,b;char s[500];printf("a b: ");scanf("%d%d",&a,&b);if(gcdn(a,26)!=1){puts("a must be coprime to 26; b can be any integer.");return 1;}getchar();printf("Text: ");fgets(s,sizeof s,stdin);for(int i=0;s[i];i++)if(isalpha((unsigned char)s[i]))s[i]='A'+modn(a*(toupper(s[i])-'A')+b,26);printf("%s",s);}
