#include "../common.h"
int main(void){long double f=1;for(int i=2;i<=25;i++)f*=i;printf("Unique 5x5 Playfair squares: 25! = %.0Lf\n",f);printf("Approximate key size: %.2f bits (log2(25!)).\n",log2((double)f));puts("Repeated-letter keywords can generate the same square; count unique squares only once.");}
