/**
 * 2020 Feb
 * Copyright 2020 petra, all rights reserved.
 */

#include <stdio.h>

#include "header.h"
#include "cui.h"

int main(){
	setProgram();
	startCui();
	
	int computer_number_a = randomNumber();
	int computer_number_b = randomNumber();
	int computer_number_c = randomNumber();
	
	int player_number_a = -1;
	int player_number_b = -1;
	int player_number_c = -1;
	
	scanf_s("%d", &player_number_a, 1); /* scanf_s("format string", address of value, size of value) */
	scanf_s("%d", &player_number_b, 1);
	scanf_s("%d", &player_number_c, 1);
	
	printf("computer number a : %d\n", computer_number_a);
	printf("computer number b : %d\n", computer_number_b);
	printf("computer number c : %d\n", computer_number_c);
	
	printf("player number a : %d\n", player_number_a);
	printf("player number b : %d\n", player_number_b);
	printf("player number c : %d\n", player_number_c);
	
	exitProgram();
	return 0;
	
}
