#include <stdio.h>
int main()
{
    int cricketScores[3][2] =
    {
        {180, 165},
        {200, 195},
        {150, 170}
    };

    for(int i=0; i<3; i++)
        {
        int max = cricketScores[i][0];
        for(int j=1; j<2; j++)
          {
            if(cricketScores[i][j] > max)
                max = cricketScores[i][j];

            printf("%d\n", max);
          }
        }
}
