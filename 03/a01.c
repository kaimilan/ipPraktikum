#include <stdio.h>
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main()
{
    double x;
    int i;
    float sin_von_x;
    int sin_indent;
    for (x = -180.0; x <= 180.0; x += 15.0)
    {
        sin_von_x = sin(x * (M_PI / 180.0));
        sin_indent = sin_von_x * 10;
        sin_indent += 10;
        for (i = 0; i <= 20; i++)
        {
            if (i == sin_indent)
            {
                putchar('+');
            }
            else
            {
                putchar(' ');
            }
        }
        putchar('\n');
    }
    return 0;
}