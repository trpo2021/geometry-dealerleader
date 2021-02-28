#include <stdio.h>
#include <string.h>

int checkfortruth (char array[])
{
    if (array[0] == 'c' || array[0] == 'C')
    {
        if (array[1] == 'i' || array[1] == 'I')
        {
            if (array[2] == 'r' || array[2] == 'R')
            {
                if (array[3] == 'c' || array[3] == 'C')
                {
                    if (array[4] == 'l' || array[4] == 'L')
                    {
                        if (array[5] == 'e' || array[5] == 'E')
                            printf("OK");
                        else
                            printf("expected: 'circle'");
                    }
                    else
                        printf("expected: 'circle'");
                }
                else
                    printf("expected: 'circle'");
            }
            else
                printf("expected: 'circle'");
        }
        else
            printf("expected: 'circle'");
    }
    else
        printf("expected: 'circle'");

    if (array[6] == ' ' || array[6] == '(')
    {
        for(int i = 6; array[i] == ' '; i++)
        {
        }
        i = 0;
    }
    else
        printf("Error at column 7: expected '('");
return 0;
}

int main()
{
// circle(1 1, 1.5)
    char geometryfigure[200];
    fgets(geometryfigure, 200, stdin);

    checkfortruth(geometryfigure);
/*
    for(int i = 0; i < strlen(geometryfigure) - 1; i++) {
        printf("%d\n", geometryfigure[i]);
    }
*/

return 0;
}
