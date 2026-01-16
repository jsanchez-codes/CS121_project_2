#Algorithm for Guess a number game

```
main():
    make a 20-length char array userName
    make an interger called guess initialize -999
    make an integer called correct will be randomly generated
    make an integer turns, initialize to 0
    make an integer (boolean) called keepGoing start true (-1)

    seed random number generator
    generate a random number between 1 and 100 put in correct
    ask user name and put in userName
    greet user with name

    while keepGoing is true:
        increment turns
        ask user for a number put it in guess
        if guess < correct:
            tell user "too low"
        else if guess > correct:
            tell user "too high"
        else:
            tell user "correct"
            set keepGoing to false

    evaluate the user perfomance
    if turns < 7:
        tell user "Very good performance!"
    else if turns > 7:
        tell user "Poor performance."
    else:
        tell user "Average perfromance."
    
    return 0
end main

```
