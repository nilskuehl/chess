#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>

#include "../include/bitboard.h"


void printBitBoard(uint64_t board) {
	for (int i = 7; i >= 0; i--) {
		printf("%d|", i + 1);
		for (int j = 0; j < 8; j++) {
			int square = getSquare(i, j);
			bool bit = getBit(board, square);
			printf("%b ", bit);
		}
		printf("\n");
	}
	printf("-----------------\n");
	printf("  a b c d e f g h");
	return;	
}


