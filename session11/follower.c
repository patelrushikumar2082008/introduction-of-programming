#include <stdio.h>
int main()
{
    int a[5]={1000,2000,3000,4000,5000};
    int *p=a;
    for(int i=0;i<5;i++)
        *(p+i)+=100;
    for(int i=0;i<5;i++)
        printf("%d ", *(p+i));
}
