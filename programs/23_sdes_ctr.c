#include "../common.h"
int main(void){char bits[100];int key=0x7D,counter=0;printf("Enter plaintext bytes as hex: ");scanf("%99s",bits);printf("Ciphertext: ");for(int i=0;bits[2*i]&&bits[2*i+1];i++,counter++){unsigned x;sscanf(bits+2*i,"%2x",&x);printf("%02X",(int)x^sdes8(counter&255,key,0));}puts("");puts("CTR decryption uses the same keystream XOR operation.");}
