#include <stdio.h>
int main(void){
 /* SHA-3 state: 1600 bits = 25 lanes of 64 bits. Rate 1024 => capacity 576 bits = 9 lanes. */
 int rateLanes=1024/64,capacityLanes=1600/64-rateLanes;
 printf("Rate lanes=%d, capacity lanes=%d\n",rateLanes,capacityLanes);
 puts("Initial capacity lanes are zero. After XORing P0, the rate lanes become nonzero (given).");
 puts("Because the permutation is ignored and original zero lanes are tracked in place, the capacity lanes remain zero indefinitely.");
 puts("Answer: no finite number of blocks; without permutation they never receive message bits.");
 return 0;
}
