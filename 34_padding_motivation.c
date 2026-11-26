#include <stdio.h>
#include <string.h>
int main(void){
 char msg[256]; printf("Enter message: "); if(!fgets(msg,sizeof msg,stdin))return 1;
 size_t n=strcspn(msg,"\n"); int block=8, pad=block-(int)((n+1)%block); if(pad==block)pad=0;
 printf("Original bytes: %zu\nPadding: one 0x80 byte then %d zero byte(s)\n",n,pad);
 puts("Padding every message (including aligned messages) makes the receiver's padding rule unambiguous and distinguishes a full final data block from padding.");
 puts("For a byte-oriented demonstration, 0x80 represents the required 1 bit followed by zero bits.");
 return 0;
}
