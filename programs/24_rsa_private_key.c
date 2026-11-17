#include "../common.h"
int main(void){long long n=3599,e=31,p=0,q=0;for(long long i=2;i*i<=n;i++)if(n%i==0){p=i;q=n/i;break;}if(!p){puts("Could not factor n.");return 1;}long long phi=(p-1)*(q-1),d=invn((int)e,(int)phi);printf("p=%lld q=%lld phi(n)=%lld\nPrivate exponent d=%lld\n",p,q,phi,d);}
