#include <stdio.h>
int main()
{
    FILE *f = fopen("playlist.txt", "a");
    fprintf(f, "Apna Bana Le\nChaleya\n");
    fclose(f);
    printf("Songs added!");
}
