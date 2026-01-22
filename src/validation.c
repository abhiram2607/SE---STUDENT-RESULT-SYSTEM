#include <ctype.h>
#include "validation.h"

int validateID(char id[])
{
    int i;

    for (i = 0; id[i] != '\0'; i++)
    {
        if (!isalnum(id[i]))
            return 0;
    }
    return 1;
}

int validateName(char name[])
{
    int i;

    for (i = 0; name[i] != '\0'; i++)
    {
        if (!isalpha(name[i]))
            return 0;
    }
    return 1;
}

int validateMarks(int mark)
{
    if (mark < 0 || mark > 100)
        return 0;

    return 1;
}
