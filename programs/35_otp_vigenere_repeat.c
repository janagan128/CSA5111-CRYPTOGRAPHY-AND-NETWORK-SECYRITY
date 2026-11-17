#include "../common.h"
int main(void){char p[500];int k[500],n;printf("Plaintext (letters only): ");scanf("%499s",p);n=(int)strlen(p);puts("Enter one key number 0..25 for each character:");for(int i=0;i<n;i++)scanf("%d",&k[i]);for(int i=0;i<n;i++)putchar('A'+modn(toupper(p[i])-'A'+k[i],26));puts("");}
