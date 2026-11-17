#include "../common.h"
int main(void){int rate=1024,capacity=1600-rate,lanes=capacity/64;printf("Rate=%d bits; capacity=%d bits = %d lanes.\n",rate,capacity,lanes);puts("With permutation ignored, message blocks XOR only into rate lanes.");puts("Therefore the capacity lanes remain zero forever; no finite number of blocks changes them.");}
