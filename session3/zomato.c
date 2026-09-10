#include<stdio.h>
int main()
{
    const float GST = 18;
    float p;

    printf("Enter Price: ");
    scanf("%f", &p);

    printf("Final Price = %.2f", p + p * GST / 100);
}
