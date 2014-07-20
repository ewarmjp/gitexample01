#include "aa.h"

int main()
{
  int i;
  for ( i=0; i<100;i++ ) {
    printf("i=%d,   foo(%d)=%d\n", i, i, foo(i));
  }
  return 0;
  
}
