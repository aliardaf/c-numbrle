#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <time.h>

int randNum;
char randNumStr[];
int playerNum;
char playerNumStr[];

void generateNumber()
{
    int randNum = rand() % (99999 + 1 - 10000) + 10000;
    sprintf(randNumStr, "%d", randNum);
}

void playerGuess()
{
    printf("Enter a five-digit number to guess: ");
    scanf("d", &playerNum);
    sprintf(playerNumStr, "%d", playerNum);
} 

void check(number, guess)
{

}

void numbrle()
{
    
}

void main()
{

}

