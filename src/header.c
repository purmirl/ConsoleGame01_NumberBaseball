/**
 * 2020 Feb
 * Copyright 2020 petra, all rights reserved.
 */

#include <stdlib.h>
#include <time.h>

int randomNumber(){
	srand(time(NULL));
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
