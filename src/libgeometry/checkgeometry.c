#include <libgeometry/checkgeometry.h>
#include "ctype.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

        void check_circle(char* string)
{
    char cir[] = "circle";
    if (memcmp(string, cir, 6) != 0) {
        printf("Error: expected circle\n");
        exit(0);
    }
    char cir_2[] = "circle(";
    if (memcmp(string, cir_2, 7) != 0) {
        printf("Error: expected (\n");
        exit(0);
    }
}
