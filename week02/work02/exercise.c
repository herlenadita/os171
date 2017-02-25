/*
 * Name : Budi Wahyu Herlen Adita
 * NPM : 1606954760
 * Class : SI Ekstensi
 * Comment : program exercise
 */

#define LOOP 4

#include <stdio.h>

void main(){
	int input = 5;
	int iter = 0;
	int result = 0;
	while(iter < LOOP){
		iter++;
		result += input;
	}
	printf("%d times %d equals %d \n", input, LOOP, result);
	
}

