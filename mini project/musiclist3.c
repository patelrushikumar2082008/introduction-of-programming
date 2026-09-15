#include <stdio.h>
int main()
{
    FILE *f = fopen("music_log.txt", "r");
    int day, min, total = 0, high = 0, count = 0;

    while(fscanf(f, "%d %d", &day, &min) == 2)
    {
        total += min;
        if(min > high) high = min;
        count++;
    }
    fclose(f);
    printf("Total = %d minutes\n", total);
    printf("Average = %.2f minutes\n", (float)total/count);
    printf("Highest = %d minutes", high);
}
