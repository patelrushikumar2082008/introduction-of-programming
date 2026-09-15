#include <stdio.h>

int main()
 {
    int ch;
    char team[20] = "";
    while(1)
        {
        printf("\n1.View Teams  2.Add Team  3.Exit\n");    // Repeat menu
        scanf("%d", &ch);
        if(ch == 1)
            printf("MI CSK RCB");    // View teams
        else if(ch == 2)
           {
            printf("Enter team: ");    // Add team
            scanf("%s", team);
            printf("Added: %s", team);
           }
        else if(ch == 3)      // Exit
            break;
    }
}
