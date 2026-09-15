#include <stdio.h>
int main()
{
    int min[7]={0}, ch, confirm;
    FILE *f;
    do {
        printf("\n1.Log  2.View  3.Reset  4.Exit\n");
        scanf("%d",&ch);
        if(ch==1)
            {
            for(int i=0;i<7;i++)
              {
                printf("Day %d: ",i+1);
                scanf("%d",&min[i]);
              }
            f=fopen("music_log.txt","w");
            for(int i=0;i<7;i++) fprintf(f,"%d\n",min[i]);
            fclose(f);
            }
        else if(ch==2)
            {
             for(int i=0;i<7;i++) printf("Day %d = %d\n",i+1,min[i]);
            }
        else if(ch==3)
            {
            printf("Reset data? (1=Yes, 0=No): ");
            scanf("%d",&confirm);
            if(confirm==1)
                {
                for(int i=0;i<7;i++) min[i]=0;
                f=fopen("music_log.txt","w");
                fclose(f);
                printf("Data reset!");
                }
            }
    } while(ch!=4);
}
