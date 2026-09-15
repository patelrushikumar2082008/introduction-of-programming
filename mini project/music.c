 #include <stdio.h>
int main()
{
    int minutes[7];

                              // Enter listening time for 7 days
    for(int i = 0; i < 7; i++)
        {
            printf("Day %d: ", i + 1);
            scanf("%d", &minutes[i]);
        }
                                 // Display the stored data
    printf("\nMusic Listening Time:\n");
    for(int i = 0; i < 7; i++)
        printf("Day %d = %d minutes\n", i + 1, minutes[i]);
}
