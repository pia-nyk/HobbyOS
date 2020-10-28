#include <string.h>

int memcmp(const void* aptr, const void* bptr, size_t size){
  const unsigned char* a = (unsigned char*) aptr;
  const unsigned char* b = (unsigned char*) bptr;

  for(int i=0; i<size; i++){
    if(a[i] > b[i])
      return 1;
    else if(a[i] < b[i])
      return -1;
  }
  return 0;
}
