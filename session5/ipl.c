#include <stdio.h>
#include <string.h>
int main()
{
    char t[20];
    scanf("%s", t);
    if(!strcmp(t,"MI")) printf("Go Mumbai Indians!");
    else if(!strcmp(t,"CSK")) printf("CSK for the win!");
    else if(!strcmp(t,"GT")) printf("Go GT!");
    else printf("Team not found!");
}
