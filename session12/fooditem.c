#include <stdio.h>
int main()
{
    struct FoodItem
    {
        char itemName[20];
        float price, rating;
    }
    f[3] =
       {
          {"Pizza", 250, 4.5},
          {"Burger", 150, 4.2},
          {"Biryani", 200, 4.7}
       };
         for(int i=0; i<3; i++)
           printf("%s %.2f %.1f\n", f[i].itemName, f[i].price, f[i].rating);
}
