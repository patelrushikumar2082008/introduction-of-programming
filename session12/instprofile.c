#include <stdio.h>
int main()
{
    struct InstaProfile
    {
        char username[20];
        int followers;
        struct
           {
              char description[30];
              int age;
           }  bio;
    }
    p = {"rushi", 100000, {"Comedy Creator", 18}};
    printf("Username: %s\nFollowers: %d\nBio: %s\nAge: %d",
           p.username, p.followers, p.bio.description, p.bio.age);
}
