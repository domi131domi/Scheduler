#include<lib.h>
#include<stdlib.h>
int setsched(int value){
message m;
if(value < 1 || value > 99)
  return -2;

m.m1_i1 = value;
return _syscall(MM,SETSCHED,&m);
}
