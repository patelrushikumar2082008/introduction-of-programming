#include <stdio.h>
#include <string.h>
int main()
{
    char songs[3][20] = {"Kesariya", "Heeriye", "Believer"};
    char guess[20];
    int n = 0;
    printf("Guess the Song: ");
    do
        {
        scanf("%s", guess);
        n++;
        if(strcmp(guess, songs[0]) == 0)
            printf("Correct! You guessed it.");
        else
            printf("Try again: ");
    } while(strcmp(guess, songs[0]) != 0);
}
