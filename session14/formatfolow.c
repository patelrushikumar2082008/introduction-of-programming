#include <stdio.h>
int main()
{
    int count;

                          // Followers count input
    scanf("%d", &count);

                            // Format the count
    if (count >= 1000000)
      {
        printf("%.1fM", count / 1000000.0);
      }
       else if (count >= 1000)
        printf("%.1fK", count / 1000.0);
       else
        printf("%d", count);
}
