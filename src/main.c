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
	
	exitProgram();
	return 0;
	
}
