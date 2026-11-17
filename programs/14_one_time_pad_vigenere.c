#include "../common.h"
int main(void){char p[]="SENDMOREMONEY",target[]="CASHNOTNEEDED";int k[]={9,0,1,7,23,15,21,14,11,11,2,8,9};char c[100];puts("Part A ciphertext:");for(int i=0;p[i];i++){c[i]='A'+modn(p[i]-'A'+k[i],26);putchar(c[i]);}c[strlen(p)]=0;puts("");puts("Part B key stream for target CASHNOTNEEDED:");for(int i=0;target[i];i++)printf("%d ",modn(c[i]-'A'-(target[i]-'A'),26));puts("");}
