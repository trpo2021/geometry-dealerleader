#include "ctype.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include <libgeometry/perim.h>
#include <math.h>
void coord_and_rad(char* rad)
{
    double p = 3.14;
    double s = atof(rad) * atof(rad) * p;
    double pir = 2 * atof(rad) * p;
    printf("square circle:%f \n", s);
    printf("perimetr circle:%f\n", pir);
}
