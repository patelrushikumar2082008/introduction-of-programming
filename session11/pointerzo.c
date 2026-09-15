#include <stdio.h>
int main()
{
    int a[5]={100,200,150,300,250};
    int *p=a;
    for(int i=0;i<5;i++)
    {
        printf("%d - %p\n", *(p+i), (void*)(p+i));
    }
}
