#include <setsched.h>
int main( int argc, char* argv[] ){
int ret;
ret = setsched(atoi(argv[1]));
return ret;
}
