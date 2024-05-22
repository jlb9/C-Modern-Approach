#include <stdio.h>
#include <string.h>
#include <stdint.h>

int main() {

	char astr[] = "message 1";

	printf("%s\n", astr);

	uint16_t length = 0;
	length = strlen(astr);

	printf("Length of string is %d\n", length);

	 
}
