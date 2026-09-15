#include <stdio.h>
int main()
{
    FILE *f = fopen("playlist.txt", "w");

    fprintf(f, "Tum Hi Ho\nKesariya\nHeeriye\n");

    fclose(f);
    printf("File created successfully!");


}
