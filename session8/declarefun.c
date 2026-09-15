#include <stdio.h>
void getUserInitials(char name[])
{
    printf("%c%c", name[0], name[6]);
}
int main()
{
    char name[] = "mahendrasinh dhoni";
    getUserInitials(name);
    return 0;
}
