#include<stdio.h>
int main()
{
    char productname[]="mobile";
    float price=15000;
    double rating=4.5;

    printf("%s-char[]\n",productname);
    printf("%.2f-float\n",price);
    printf("%.1lf-double\n",rating);
}
