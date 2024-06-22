#ifndef CHIP8_HEADER
#define CHIP8_HEADER
#include<SDL2/SDL.h>

typedef struct{
	unsigned char R[16]		//16- 8bit registers	
	unsigned short PC;		//16 bit program counter
	unsigned short SP;		//8 bit stack pointer
	unsigned char memory[4096]	//8 bit cell
	unsigned short stack[16]	//16 bit to handle if we get 0xFFF
	unsigned short IR		//16 bit index register
	unsigned char delayTimer	//8 bit delay timer
	unsigned char soundTimer	//8 bit sound timer
} c8;


void init(c8 *chip8);
