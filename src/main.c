/**
 * 2020 Feb
 * Copyright 2020 petra, all rights reserved.
 */

#include <stdio.h>

#include "header.h"

int main(){
	setProgram();
	
	int number_a = randomNumber();
	int number_b = randomNumber();
	int number_c = randomNumber();
	printf("%d %d %d \n", number_a, number_b, number_c);
	
	exitProgram();
	return 0;
	
}
