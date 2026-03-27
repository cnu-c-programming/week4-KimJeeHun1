#include <stdio.h>

void swap_endian(int *x){
  
}

int main(){
  int x = 0x12345678;
  printf("%x\n", x);
  swap_endian(&x);
  printf("%x\n", x);
  return 0;
}
