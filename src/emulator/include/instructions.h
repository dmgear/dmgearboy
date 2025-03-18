#pragma once
#include <common.h>

typedef enum {
    NONE,
    NOP,
    LD,
    INC,
    DEC,
    RLCA,
    ADD,
    SUB,
    RRCA,
    STOP,
    RLA,
    JR,
    RRA,
    DAA,
    CPL,
    SCF,
    CCF,
    HALT,
    AND,
    XOR,
    OR,
    CP,
    RET,
    PUSH,
    ERR,
    SWAP,
    BIT,
    RES,
    SET,
    CALL,
    ADC,
    SBC,
    RLC,
    RRC,
    RL,
    RR,
    SLA,
    SRA,
    RST,
    LDH,
    JPHL,
    SRL,
    RETI,
    JP,
    DI,
    EI,
    POP,
    CB

} in_t;

typedef enum {
    NONE,
    NZ,
    Z,
    NC,
    C,
} condition_t;

typedef struct {
    in_t type;
    condition_t cond;
} instruction;