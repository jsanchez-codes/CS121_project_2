#Algorithm for Guess a number game

```
#define FALSE 0
#define TRUE -1

main():
    make a 20-length char array userName
    make an interger called guess
    make an integer called correct will be randomly generated
    make an integer turns, initialize to 0
    make an integer (boolean) called keepGoing start TRUE

    seed random number generator
    generate a random number between 1 and 100 put in correct

    ask user name and put in userName
    scan user input
    greet userName and start number guessing game

    while keepGoing is true:
        increment turns
        prints turn number and asks the user for a number 1-100
        scans user input
        prints the user input number
        if guess < correct:
            tell user "too low"
        else if guess > correct:
            tell user "too high"
        else:
            tell user "correct"
            set keepGoing to false
        end if
    end while

    evaluate the user perfomance
    if turns < 7:
        tell user "Very good performance!"
    else if turns > 7:
        tell user "Poor performance."
    else:
        tell user "Average."
    end if
    
    return 0
end main

```
