#ifndef CHIP8REGISTERS_H
#define CHIP8REGISTERS_H

#include <config.h>

struct chip8_registers
{
    unsigned char V[CHIP8_TOTAL_DATA_REGISTERS];
    unsigned short I;
    unsigned char DT;  // delay timer
    unsigned char ST;  // sound timer
    unsigned short PC; // program counter
    unsigned char SP;  // stack pointer
};

#endif