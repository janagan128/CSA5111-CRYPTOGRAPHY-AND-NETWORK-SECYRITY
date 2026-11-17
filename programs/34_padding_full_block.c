#include "../common.h"
int main(void){char b[300];printf("Enter data bits: ");scanf("%299s",b);int n=(int)strlen(b),z=8-n%8;if(z==0)z=8;printf("%s1",b);for(int i=1;i<z;i++)putchar('0');puts("");puts("Always adding padding makes the final padding length detectable and unambiguous.");}
