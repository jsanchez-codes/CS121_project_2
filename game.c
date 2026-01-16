#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FALSE 0
#define TRUE -1

int main(){
	char userName[20];
	int guess;
	int correct;
	int turns = 0;
	int keepGoing = TRUE;

	srand(time(NULL));
	correct = (rand() % 100) + 1;

	printf("Correct: %d \n", correct);

	printf("Hello. What is your name? ");
	scanf("%s", userName);
	printf("Nice to meet you %s. Let's play a game. \n", userName);

	while (keepGoing == TRUE){
		turns++;
		printf("Please guess a number 1-100: ");
		scanf("%d", &guess);
		printf("You guessed %d. \n", guess);

		if (guess < correct){
			printf("Too low. \n");
		}	else if (guess > correct){
			printf("Too high. \n");
		}	else {
			printf("You guessed the number! \n");
			keepGoing = FALSE;
		} // end if
	} // end while
	
	return 0;
} // end main	
