// quotes.h
#ifndef QUOTES_H
#define QUOTES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QUOTES 10

void print_quote(char ** quotes, int index);
void print_random_quote(char ** quotes);

#endif

// quotes.c
#include "quotes.h"

void print_quote(char ** quotes, int index) {
    printf("%s\n", quotes[index]);
}

void print_random_quote(char ** quotes) {
    int index = rand() % MAX_QUOTES;
    print_quote(quotes, index);
}