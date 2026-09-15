#include <stdio.h>
int main()
{
    int minutes[7], choice, day;
    do
        {
        printf("\n1. Log Minutes\n2. Weekly Summary\n3. Exit\n");
        scanf("%d", &choice);
        if(choice == 1)
            {
                printf("Enter day (1-7): ");
                scanf("%d", &day);
                printf("Enter minutes: ");
                scanf("%d", &minutes[day - 1]);
            }
        else if(choice == 2)
         {
            for(int i = 0; i < 7; i++)
                printf("Day %d = %d minutes\n", i + 1, minutes[i]);
         }
       }
    while(choice != 3);
    printf("Exiting...");
}
