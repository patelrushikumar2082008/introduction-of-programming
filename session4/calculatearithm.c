#include<stdio.h>
int calculateTotal(int itemPrice, int quantity)
{
    return itemPrice * quantity;
}
  int main()
  {
      printf("Total = %d", calculateTotal(100, 3));
      return 0;
  }
