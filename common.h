#ifndef CRYPTO_COMMON_H
#define CRYPTO_COMMON_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdint.h>
#include <math.h>
static int modn(int x,int m){x%=m; return x<0?x+m:x;}
static int gcdn(int a,int b){while(b){int t=a%b;a=b;b=t;}return a<0?-a:a;}
static int invn(int a,int m){for(int x=1;x<m;x++)if(modn(a*x,m)==1)return x;return -1;}
static long long powmodn(long long a,long long e,long long n){long long r=1;while(e){if(e&1)r=r*a%n;a=a*a%n;e>>=1;}return r;}
static void upper_letters(char *s){for(;*s;s++)*s=(char)toupper((unsigned char)*s);}
static int sdes_perm(int x,const int *p,int n,int bits){int y=0;for(int i=0;i<n;i++)y=(y<<1)|((x>>(bits-p[i]))&1);return y;}
static const int SD_P10[]={3,5,2,7,4,10,1,9,8,6}, SD_P8[]={6,3,7,4,8,5,10,9};
static const int SD_IP[]={2,6,3,1,4,8,5,7}, SD_IIP[]={4,1,3,5,7,2,8,6}, SD_EP[]={4,1,2,3,2,3,4,1}, SD_P4[]={2,4,3,1};
static const int SD_S0[4][4]={{1,0,3,2},{3,2,1,0},{0,2,1,3},{3,1,3,2}};
static const int SD_S1[4][4]={{0,1,2,3},{2,0,1,3},{3,0,1,0},{2,1,0,3}};
static void sdes_keys(int key,int *k1,int *k2){int p=sdes_perm(key,SD_P10,10,10),l=(p>>5)&31,r=p&31;l=((l<<1)|(l>>4))&31;r=((r<<1)|(r>>4))&31;*k1=sdes_perm((l<<5)|r,SD_P8,8,10);l=((l<<2)|(l>>3))&31;r=((r<<2)|(r>>3))&31;*k2=sdes_perm((l<<5)|r,SD_P8,8,10);}
static int sdes_f(int r,int k){int z=sdes_perm(r,SD_EP,8,4)^k;int a=(z>>6)&15,b=z&15;int row=((a&8)>>2)|(a&1),col=(a>>1)&3;int s0=SD_S0[row][col];row=((b&8)>>2)|(b&1);col=(b>>1)&3;int s1=SD_S1[row][col];return sdes_perm((s0<<2)|s1,SD_P4,4,4);}
static int sdes_round(int x,int k){int l=(x>>4)&15,r=x&15;return (r<<4)|(l^sdes_f(r,k));}
static int sdes8(int x,int key,int decrypt){int k1,k2;sdes_keys(key,&k1,&k2);int y=sdes_perm(x,SD_IP,8,8);y=sdes_round(y,decrypt?k2:k1);y=((y&15)<<4)|(y>>4);y=sdes_round(y,decrypt?k1:k2);return sdes_perm(y,SD_IIP,8,8);}
#endif
