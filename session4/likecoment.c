 #include<stdio.h>
 int main()
{
    int likes = 1500, comments = 200, shares = 60;
    if (likes >= 500 || (comments > 50 && shares >= 10))
    {
        printf("Trending");
    }
    else
        printf("Not Trending");
}
