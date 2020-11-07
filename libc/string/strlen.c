#include <string.h>

size_t strlen(const char* string) {
  int len = 0;
  while(string[len])
    len++;
  return len;
}
