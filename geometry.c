#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkfortruth (char array[])
{
    int i, k = 6;
    char circle[] = "circle";

    for(i = 0; i < 6; i++)
    {
       array[i] = tolower(array[i]);
    }

    for(i = 0; i < 6; i++)
    {
        if (array[i] == circle[i])
        {

        }
        else
            printf("expected: 'circle'\n");
        break;
    }
    while (array[k] == ' ')
    {
        k++;
    }
    if (array[k] == '(')
    {
        k++;
        if(isdigit(array[k]) != 0 || array[k] == '-')
        {
            if(array[k] == '-')
                k++;
            if(isdigit(array[k]) != 0)
            {
                k+=2;
                if(isdigit(array[k]) != 0 || array[k] == '-')
                {
                    if(array[k] == '-')
                        k++;
                    if(isdigit(array[k]) != 0)
                    {
                        k++;
                    }
                }
                else
                    printf("expected: digit after '('");
            }
        }
        else
            printf("expected: digit after '('");
    }
    else
        printf("expected: '(' after 'circle'\n");

    while(array[k] == ' ')
        k++;
    if(array[k] == ',')
    {
        k++;
        while(array[k] == ' ')
            k++;
    }
    else
        printf("expected: ',' after 'y' coordinate");

    if(isdigit(array[k]) != 0)
    {
        while(isdigit(array[k]) != 0) //80
            k++;
    }
    else
        printf("expected: radius value after 'x y, '");

    if(array[k] == '.')
    {
        k++;
        while(isdigit(array[k]) != 0)
            k++;
        if(array[k] == ' ')
        {
            while(array[k] == ' ')
                k++;
            if(array[k] == ')')
            {
                k++;
//                printf("%c", array[k]);
                if(array[k] == '\0')
                    printf("it`s ok!");
            }
            else
                printf("expected: ')' after radius value");
        }
        
    }
    else
        printf("expected: radius value must be 'double'");



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
