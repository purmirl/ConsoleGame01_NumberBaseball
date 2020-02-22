/**
 * 2020 Feb
 * Copyright 2020 petra, all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void setProgram(){
	srand(time(NULL));
}
int randomNumber(){
	int result = (rand() % 9) + 1;
	return result;
}

void exitProgram(){
	printf("\n");
	printf("--------------------------------------------------------------------\n");
	printf("Program exit : Click <Esc> key.\n");
	while(1){
		
	}
}
