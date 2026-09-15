#include <stdio.h>
int main()
{
    int followers = 9000, x;
    x = followers + 1000;   // Pass by value
    printf("Value: %d\n", followers);
    followers += 1000;      // Pass by reference
    printf("Reference: %d", followers);
}
