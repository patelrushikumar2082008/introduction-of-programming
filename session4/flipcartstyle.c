#include<stdio.h>
int main()
{
    float price =5000,discount=20,final;
    int isMember=1;
    final = price - (price*discount/100);
    if(isMember && isMember==1)
        final = final - (final*5/100);
        printf("final price = %2f",final);
}
