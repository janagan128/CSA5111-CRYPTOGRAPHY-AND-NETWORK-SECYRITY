#include "../common.h"
int main(void){char bits[300];printf("Enter bit string: ");scanf("%299s",bits);int n=(int)strlen(bits),pad=8-(n%8);if(pad==0)pad=8;printf("Padded: %s1",bits);for(int i=1;i<pad;i++)putchar('0');puts("");printf("Padding bits added: %d (always add a full block when aligned).\n",pad);puts("A full padding block makes padding removal unambiguous.");}
