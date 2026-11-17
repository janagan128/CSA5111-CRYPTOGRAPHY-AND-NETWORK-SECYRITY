#include "../common.h"
#include <openssl/evp.h>
int main(void){unsigned char key[32]={0},iv[16]={0},in[1024],out[1040];int n,m;EVP_CIPHER_CTX *ctx;printf("Plaintext: ");fgets((char*)in,sizeof in,stdin);ctx=EVP_CIPHER_CTX_new();EVP_EncryptInit_ex(ctx,EVP_aes_256_cbc(),NULL,key,iv);EVP_EncryptUpdate(ctx,out,&n,in,(int)strlen((char*)in));EVP_EncryptFinal_ex(ctx,out+n,&m);printf("AES-256-CBC ciphertext (hex): ");for(int i=0;i<n+m;i++)printf("%02X",out[i]);puts("");EVP_CIPHER_CTX_free(ctx);puts("AES is preferred over 3DES for modern security and performance.");}
