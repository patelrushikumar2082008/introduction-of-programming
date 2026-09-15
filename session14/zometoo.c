#include <stdio.h>
int main()
{
    int p[3]={120,250,90}, total=0;
    for(int i=0;i<3;i++)
        total += p[i];
    printf("Total price = %d", total);

}
