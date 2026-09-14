#include <stdio.h>
int main()
 {
    float a, d = 0;
    scanf("%f", &a);
    if (a > 2000) {
        d = a * 0.20;
    } else {
        if (a > 1000)
            d = a * 0.10;
    }
    printf("Final Amount = %.2f", a - d);
}
