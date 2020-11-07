#include <string.h>

void* memmove(void* aptr, const void* bptr, size_t size) {
  unsigned char* dst = (unsigned char*) aptr;
	const unsigned char* src = (const unsigned char*) bptr;
	if (dst < src) {
		for (size_t i = 0; i < size; i++)
			dst[i] = src[i];
	} else {
		for (size_t i = size; i != 0; i--)
			dst[i-1] = src[i-1];
	}
	return aptr;
}
