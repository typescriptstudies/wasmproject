#include <stdint.h>

uint8_t buff[10][100];

uint64_t addr(int buffer_index){
	return (uint64_t)&buff[buffer_index];
}