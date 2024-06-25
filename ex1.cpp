#include "ex1.h"

void replaceDigitsWithExclamation(char* arr, int length)
{
    for (int i = 0; i < length; ++i)
    {
        if (arr[i] >= '0' && arr[i] <= '9')
        {
            arr[i] = '!';
        }
    }
}
