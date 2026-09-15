#include <stdio.h>
int main()
{
    int a[7]={100,200,150,300,250,180,220}, sum=0;
    for(int i=0;i<7;i++)
    {
        sum += a[i];
    }
    printf("Average = %.2f", sum/7.0);
}
