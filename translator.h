#pragma once
#ifndef Assignment1_201821054_하태선_h
#define Assignment1_201821054_하태선_h
#include <stdio.h>
#include <string.h> 
#include <stdbool.h>
#include <stdlib.h>

bool Dist(char* token) {
	if (strcmp(token, "addi") == 0 || strcmp(token, "andi") == 0 || strcmp(token, "lw") == 0 || strcmp(token, "sw") == 0) {
		return true; //I format
	}
	else if (strcmp(token, "add") == 0 || strcmp(token, "sub") == 0 || strcmp(token, "and") == 0 || strcmp(token, "sll") == 0 || strcmp(token, "srl") == 0) {
		return false; //R format
	}
}
void Replace1(char* str) {
	char* ptr = strchr(str, '(');
	if (ptr) {*ptr = ' ';}
}
void Replace2(char* str) {
	char* ptr = strchr(str, ')');
	if (ptr) { *ptr = ' '; }
}
void Replace3(char* str) {
	while (str != NULL) {
		char* ptr = strchr(str, ',');
		if (ptr) { *ptr = ' '; }
		str = strchr(str + 1, ',');
	}
}
void Print_6b_Bry(int value) {
	for (int i = 5; i >= 0; --i) {
		int result = value >> i & 1;
		printf("%d", result);
	}
}
void Print_5b_Bry(int value) {
	for (int i = 4; i >= 0; --i) {
		int result = value >> i & 1;
		printf("%d", result);
	}
}
void Print_16b_Bry(int value) {
	for (int i = 15; i >= 0; --i) {
		int result = value >> i & 1;
		printf("%d", result);
	}
}
int I_Op_Change(char* token) {
	long value = 0;
	if (strcmp(token, "addi") == 0) {
		value = strtol("0x08", NULL, 16); return value;
	}
	else if (strcmp(token, "andi") == 0) {
		value = strtol("0x25", NULL, 16); return value;
	}
	else if (strcmp(token, "lw") == 0) {
		value = strtol("0x23", NULL, 16); return value;
	}
	else if (strcmp(token, "sw") == 0) {
		value = strtol("0x2b", NULL, 16); return value;
	}
}
int R_Func_Change(char* token) {
	long value = 0;
	if (strcmp(token, "add") == 0) {
		value = strtol("0x20", NULL, 16); return value;
	}
	else if (strcmp(token, "sub") == 0) {
		value = strtol("0x22", NULL, 16); return value;
	}
	else if (strcmp(token, "and") == 0) {
		value = strtol("0x24", NULL, 16); return value;
	}
	else if (strcmp(token, "sll") == 0) {
		value = strtol("0x00", NULL, 16); return value;
	}
	else if (strcmp(token, "srl") == 0) {
		value = strtol("0x02", NULL, 16); return value;
	}
}
int Num_Regist(char* token) {
	int num;
	num = atoi(token);
	return num;
}
int Regist(char* token) {
	int value = 0;
	if (strcmp(token, "$zero") == 0) {
		value = 1; return value;
	}
	else if (strcmp(token, "$at") == 0) {
		value = 1; return value;
	}
	else if (strcmp(token, "$v0") == 0) {
		value = 2; return value;
	}
	else if (strcmp(token, "$v1") == 0) {
		value = 3; return value;
	}
	else if (strcmp(token, "$a0") == 0) {
		value = 4; return value;
	}
	else if (strcmp(token, "$a1") == 0) {
		value = 5; return value;
	}
	else if (strcmp(token, "$a2") == 0) {
		value = 6; return value;
	}
	else if (strcmp(token, "$a3") == 0) {
		value = 7; return value;
	}
	else if (strcmp(token, "$t0") == 0) {
		value = 8; return value;
	}
	else if (strcmp(token, "$t1") == 0) {
		value = 9; return value;
	}
	else if (strcmp(token, "$t2") == 0) {
		value = 10; return value;
	}
	else if (strcmp(token, "$t3") == 0) {
		value = 11; return value;
	}
	else if (strcmp(token, "$t4") == 0) {
		value = 12; return value;
	}
	else if (strcmp(token, "$t5") == 0) {
		value = 13; return value;
	}
	else if (strcmp(token, "$t6") == 0) {
		value = 14; return value;
	}
	else if (strcmp(token, "$t7") == 0) {
		value = 15; return value;
	}
	else if (strcmp(token, "$s0") == 0) {
		value = 16; return value;
	}
	else if (strcmp(token, "$s1") == 0) {
		value = 17; return value;
	}
	else if (strcmp(token, "$s2") == 0) {
		value = 18; return value;
	}
	else if (strcmp(token, "$s3") == 0) {
		value = 19; return value;
	}
	else if (strcmp(token, "$s4") == 0) {
		value = 20; return value;
	}
	else if (strcmp(token, "$s5") == 0) {
		value = 21; return value;
	}
	else if (strcmp(token, "$s6") == 0) {
		value = 22; return value;
	}
	else if (strcmp(token, "$s7") == 0) {
		value = 23; return value;
	}
	else if (strcmp(token, "$t8") == 0) {
		value = 24; return value;
	}
	else if (strcmp(token, "$t9") == 0) {
		value = 25; return value;
	}
	else if (strcmp(token, "$k1") == 0) {
		value = 26; return value;
	}
	else if (strcmp(token, "$k2") == 0) {
		value = 27; return value;
	}
	else if (strcmp(token, "$gp") == 0) {
		value = 28; return value;
	}
	else if (strcmp(token, "$sp") == 0) {
		value = 29; return value;
	}
	else if (strcmp(token, "$fp") == 0) {
		value = 30; return value;
	}
	else if (strcmp(token, "$ra") == 0) {
		value = 31; return value;
	}

}
#endif