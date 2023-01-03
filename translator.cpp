#define _CRT_SECURE_NO_WARNINGS
#include "Assignment1_201821054_ÇÏÅÂ¼±.h"
#include<stdio.h>
#include<string.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
    char a_c[100];
    long val = 0;
    long value1 = 0;
    long value2 = 0;
    long value3 = 0;
    bool form;
    char* a = NULL;
    while (1) {
        gets_s(a_c);
        Replace1(a_c);
        Replace2(a_c);
        Replace3(a_c);

        char* token = strtok(a_c, " ");
        form = Dist(token);

        if (form == false) { //R format
            if (strcmp(token, "sub") == 0 || strcmp(token, "add") == 0 || strcmp(token, "and") == 0) {
                printf("000000");
                val = R_Func_Change(token);
                token = strtok(NULL, " ");
                value3 = Regist(token);
                token = strtok(NULL, " ");
                value1 = Regist(token);
                token = strtok(NULL, " ");
                value2 = Regist(token);
                Print_5b_Bry(value1);
                Print_5b_Bry(value2);
                Print_5b_Bry(value3);
                printf("00000");
                Print_6b_Bry(val);
                printf("\n");
            }
            else if (strcmp(token, "srl") == 0 || strcmp(token, "sll") == 0) {
                printf("000000");
                val = R_Func_Change(token);
                token = strtok(NULL, " ");
                value1 = Regist(token);
                token = strtok(NULL, " ");
                value2 = Regist(token);
                token = strtok(NULL, " ");
                value3 = Num_Regist(token);
                printf("00000");
                Print_5b_Bry(value2);
                Print_5b_Bry(value1);
                Print_5b_Bry(value3);
                Print_6b_Bry(val);
                printf("\n");
            }
        }
        else if (form == true) {
            if (strcmp(token, "addi") == 0 || strcmp(token, "andi") == 0) {
                val = I_Op_Change(token);
                token = strtok(NULL, " ");
                value1 = Regist(token);
                token = strtok(NULL, " ");
                value2 = Regist(token);
                token = strtok(NULL, " ");
                value3 = Num_Regist(token);
                Print_6b_Bry(val);
                Print_5b_Bry(value2);
                Print_5b_Bry(value1);
                Print_16b_Bry(value3);
                printf("\n");
            }
            else if (strcmp(token, "lw") == 0 || strcmp(token, "sw") == 0) {
                val = I_Op_Change(token);
                token = strtok(NULL, " ");
                value1 = Regist(token);
                token = strtok(NULL, " ");
                value2 = Num_Regist(token);
                token = strtok(NULL, " ");
                value3 = Regist(token);
                Print_6b_Bry(val);
                Print_5b_Bry(value3);
                Print_5b_Bry(value1);
                Print_16b_Bry(value2);
                printf("\n");
            }
        }
    }
    return 0;
}