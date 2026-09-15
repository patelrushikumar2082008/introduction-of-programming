 #include <stdio.h>
#include <string.h>

int main()
{
    char s[50];
    FILE *f = fopen("playlist.txt","r");

    while(fgets(s,50,f))
        if(strstr(s,"Kesariya") || strstr(s,"Kesariya"))
            printf("%s",s);

    fclose(f);
    return 0;
}
