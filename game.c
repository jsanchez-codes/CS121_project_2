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

	printf("Hello. What is your name? ");
	scanf("%s", userName);
	printf("Nice to meet you %s. Let's play a number guessing game. \n", userName);

	while (keepGoing == TRUE){
		turns++;
		printf("Turn %d. Please guess a number 1-100: ", turns);
		scanf("%d", &guess);
		printf("You guessed the number %d. \n", guess);

		if (guess < correct){
			printf("Too low. \n");
		}	else if (guess > correct){
			printf("Too high. \n");
		}	else {
			printf("Congratulations! You guessed the correct number! \n");
			keepGoing = FALSE;
		} // end if
	} // end while
	
	if (turns < 7){
		printf("Good Job! You guessed the number in less turns than the average user. \n");
	}	else if (turns > 7){
			printf("You can do better than that. Try again to guess the number in 7 (average score) or less turns. \n");
	}	else {
		printf("Your score is the user average amount of turns. Try again to beat the average score. \n");
	} // end if
	
	return 0;
} // end main	
