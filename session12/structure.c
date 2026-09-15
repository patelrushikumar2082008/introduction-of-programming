#include <stdio.h>
int main()
{
    struct
    {
        char title[20], artist[20];
        int duration;
    }
       p = {"Tum Hi Ho", "Arijit Singh", 262};
       printf("%s\n%s\n%d", p.title, p.artist, p.duration);
}
