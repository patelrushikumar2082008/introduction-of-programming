#include <stdio.h>
int main()
{
    int likes = 1000;
    int *ptrLikes = &likes;
    printf("Likes = %d\n", likes);
    printf("Address = %p", (void*)ptrLikes);
}
