#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libgeometry/checkgeometry.h"
#include "libgeometry/checkcoords.h"
#include "libgeometry/perim.h"

int main()
{
    int i, count_fig = 0;
    for (i = 0; i > -1; i++) {
        count_fig++;
        char mcoord[50] = "";
        char mrad[50] = "";
        int i;
        char instr[100] = "";
        fgets(instr, 100, stdin);
        if (instr[0] == '\n')
            exit(0);

        char out[100] = "";
        strncpy(out, instr, 100);
        for (i = 0;i < 100; i++) {
            instr[i] = tolower(instr[i]);
        }
        check_circle(instr);
        check_digit(instr, mcoord, mrad);
        printf("%d)", count_fig);
        puts(out);
        coord_and_rad(mrad);
    }
    return 0;
}
