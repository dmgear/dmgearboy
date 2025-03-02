#pragma once
#include <common.h>

typedef struct {
   /*
    This structure represents the registers of the Game Boy CPU.

    - A: The accumulator register used in arithmetic and logic operations.
    - F: The flags register, holding the status flags for the CPU (e.g., Zero, Subtraction, Half-carry, Carry).
    - B: A general-purpose 8-bit register.
    - C: A general-purpose 8-bit register.
    - D: A general-purpose 8-bit register.
    - E: A general-purpose 8-bit register.
    - H: A general-purpose 8-bit register.
    - L: A general-purpose 8-bit register.
    - SP: The Stack Pointer, used for managing function calls and local data storage.
    - PC: The Program Counter, which holds the address of the next instruction to execute.

    The structure simulates the state of the CPU during the execution of instructions in the Game Boy emulator.
    */

    u8 A; 
    u8 F; 
    u8 B;
    u8 C;
    u8 D;
    u8 E;
    u8 H;
    u8 L;
    u16 SP;
    u16 PC;
} gb_register;