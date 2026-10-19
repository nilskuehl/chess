#ifndef BITBOARD_H
#define BITBOARD_H

#include <stdint.h>
#include <stdbool.h>

void printBitBoard(uint64_t board);

static inline int getSquare(int rank, int file) {return rank * 8 + file;}
static inline bool getBit(uint64_t board, int square) {return (board >> square) & 1ULL;}

#endif
