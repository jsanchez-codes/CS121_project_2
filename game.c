#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	char name[20];
	printf("Hello. What is your name? ");
	scanf("%s", name);
	printf("Nice to meet you %s! Let's play a game. \n", name);

	srand(time(NULL));
	int a;
	a = rand();
	a = (a % 100) + 1;
	printf("%d", a);
	
	return 0;
} // end main	
