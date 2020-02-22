/**
 * 2020 Feb
 * Copyright 2020 petra, all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ESC 27

void setProgram(){
	printf("loading...\n");
	srand(time(NULL));
	system("cls");
}

int randomNumber(){
	int result = (rand() % 9) + 1;
	return result;
}

void exitProgram(){
	char exitKey;
	int exitCountNumber = 0;
	
	printf("\n");
	printf("--------------------------------------------------------------------\n");
	printf("program exit : click <esc> key.\n");
	
	do{
		exitKey = getch();
		switch(exitKey){
			case ESC:
				exitCountNumber = 1;
				break;
		}
	}while(exitCountNumber != 1);
}
