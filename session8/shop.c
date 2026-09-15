#include <stdio.h>
#include <string.h>
int main()
{
    char cart[5][20] = {"Pizza"};
    int n = 1;
    strcpy(cart[n], "Burger");
    n++;
    for(int i=0; i<n; i++)
        printf("%s\n", cart[i]);
}
