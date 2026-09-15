#include <stdio.h>
int main()
{
    FILE *f = fopen("playlist.txt", "r");
    char s[50];
    while(fgets(s, 50, f))
        printf("%s", s);
    fclose(f);
}
