/* Header file for Card struct and all prototype functions */
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>
typedef struct Card {
    int rank;
    char suit;
    struct Card *next; /* have to use struct Card because the typedef isn't "ready" yet */
} card;

/* Prototype all functions below:*/
int count_deck(card *deck);
card* shuffle(card *deck);
card* make_deck(); // returns to the head of the list
void destroy_deck(card *deck); //free memory of all cards in deck
card* deal(card *top); //expected to get head of deck for input
int total(card *hand); // returns sum of values of cards
void show(card *hand); // prints rank & suite
void print_deck(card *deck); // prints every rank & suit in deck