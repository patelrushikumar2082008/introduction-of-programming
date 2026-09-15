#include <stdio.h>
int main()
{
    struct MovieShow
    {
        char movie[30];
        int screen;
        struct
        {
            int hours, minutes;
        } time;
    }
    m = {"Pushpa 2", 3, {7, 30}};
    printf("Movie: %s, Screen: %d, Time: %02d:%02d",
           m.movie, m.screen, m.time.hours, m.time.minutes);
}
