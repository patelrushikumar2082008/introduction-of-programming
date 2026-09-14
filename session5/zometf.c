 #include <stdio.h>
#include <string.h>

int main() {
    char m[10];
    scanf("%s", m);

    switch(m[0]) {
        case 'b':
             printf("Dosa");
              break;
        case 'l':
             printf("Biryani");
             break;
        case 'd':
            printf("Pizza");
             break;
        case 's':
            printf("Sandwich");
            break;
        default:
             printf("Try some fruits!");
    }

}
