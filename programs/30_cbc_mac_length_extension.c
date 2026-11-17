#include "../common.h"
int main(void){unsigned x,k,t,m2;printf("Enter toy block X and key K (0..255): ");scanf("%u%u",&x,&k);t=(x^k);m2=x^t;unsigned t2=((t^m2)^k);printf("T=E_K(X)=%u\nSecond block X xor T=%u\nMAC(X || (X xor T))=%u\n",t,m2,t2);puts("Toy XOR block cipher illustrates why raw CBC-MAC must be length-protected.");}
