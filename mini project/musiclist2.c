#include <stdio.h>
int main()
{
    int day, min[7];
    FILE *f = fopen("music_log.txt", "w");
    for(int i=0;i<7;i++)
        {
           printf("Day %d: ", i+1);
           scanf("%d",&min[i]);
           fprintf(f,"%d %d\n",i+1,min[i]);
        }
    fclose(f);
    printf("Data saved!");

}
