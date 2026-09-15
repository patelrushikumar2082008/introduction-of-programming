#include <stdio.h>
int main()
 {
    int i;
    // Entry-controlled loop
    for(i = 1; i <= 5; i++)
        printf("%d ", i);
    printf("\n");
    // Exit-controlled loop
    i = 1;
    do
        {
          printf("%d ", i);
          i++;
        }
    while(i <= 5);
}
