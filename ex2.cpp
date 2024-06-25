#include "ex2.h"

void replaceFirstAndLastChar(char* str, int length)
{
    if (length > 0)
    {
        str[0] = ' ';
        if (length > 1)
        {
            str[length - 1] = '.';
        }
    }
}
