# Blackjack Card Game

## What this program does
This program is built in C Language, simple blackjack game that will shuffle the deck as much as the user chooses, then the user can either hit or stand for each draw. The user is playing against the dealer.

### File Descriptions
* [card.h](card.h) is just a header file that includes the Struct named card that has the card rank, card suit, and a pointer to next card.
* [card.c](card.c) defines all the card functions such as **shuffle, destroy deck, deal, show cards in list, etc.**
* [game.c](game.c) acts as our main file where the game is played. Calls all functions from **card.c**.

### How to run Program
* A [Makefile](Makefile) is provided for easy compiling and running the program.
* `make all` will create everything needed to create the program
* `make run` will run the program

## Output

```
SHUFFLED DECK:
Shuffle again?('y'/'Y' or 'n'/'N')
y
Shuffle again?('y'/'Y' or 'n'/'N')
y
Shuffle again?('y'/'Y' or 'n'/'N')
n
Dealer's hand: 7D 
My hand: 6S 3H 
hit('h'/'H') or stand('s'/'S')?
h
My hand: 6S 3H 2H 
Hit(H/h) or Stand(S/s)
h
My hand: 6S 3H 2H 5S 
Hit(H/h) or Stand(S/s)
s
Dealer's hand: 7D 1H 13C 
My hand: 6S 3H 2H 5S 
Lost! Dealers hand is greater
```

```
SHUFFLED DECK:
Shuffle again?('y'/'Y' or 'n'/'N')
y
Shuffle again?('y'/'Y' or 'n'/'N')
y
Shuffle again?('y'/'Y' or 'n'/'N')
y
Shuffle again?('y'/'Y' or 'n'/'N')
n   
Dealer's hand: 11S 
My hand: 9C 3S 
hit('h'/'H') or stand('s'/'S')?
h
My hand: 9C 3S 8S 
Hit(H/h) or Stand(S/s)
s
Dealer's hand: 11S 5H 11H 
My hand: 9C 3S 8S 
Win! Dealer busted
```