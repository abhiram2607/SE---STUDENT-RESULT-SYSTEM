#include <stdio.h>
#include "file_io.h"

int readStudentCount(FILE *fp)
{
    int n;
    fscanf(fp, "%d", &n);
    return n;
}

void readStudentData(FILE *fp, struct student *s, int index)
{
    int i;

    fscanf(fp, "%s %s", s[index].id, s[index].name);

    for (i = 0; i < SUBJECTS; i++)
    {
        fscanf(fp, "%d", &s[index].marks[i]);
    }
}
