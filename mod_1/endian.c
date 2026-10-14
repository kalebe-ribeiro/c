#include <stdio.h>
#include <stdint.h>

int main(void)
{
	uint32_t v = 0x01020304;
	uint8_t *p = (uint8_t *)&v;

	printf("p[0] = 0x%02X\n", p[0]);
	return 0;
}
