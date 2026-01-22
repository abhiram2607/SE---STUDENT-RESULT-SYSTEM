#include <string.h>
#include "result.h"

void calculateTotalAndPercentage(struct student *s)
{
    int i;
    s->total = 0;

    for (i = 0; i < SUBJECTS; i++)
    {
        s->total += s->marks[i];
    }

    s->percentage = s->total / (float)SUBJECTS;
}

void assignGradeAndCGPA(struct student *s)
{
    int i;
    int fail = 0;

    for (i = 0; i < SUBJECTS; i++)
    {
        if (s->marks[i] < 50)
        {
            fail = 1;
            break;
        }
    }

    if (fail || s->percentage < 50)
    {
        strcpy(s->grade, "F");
        s->cgpa = 0;
    }
    else if (s->percentage >= 90)
    {
        strcpy(s->grade, "O");
        s->cgpa = 10;
    }
    else if (s->percentage >= 85)
    {
        strcpy(s->grade, "A+");
        s->cgpa = 9;
    }
    else if (s->percentage >= 75)
    {
        strcpy(s->grade, "A");
        s->cgpa = 8;
    }
    else if (s->percentage >= 65)
    {
        strcpy(s->grade, "B+");
        s->cgpa = 7;
    }
    else if (s->percentage >= 60)
    {
        strcpy(s->grade, "B");
        s->cgpa = 6;
    }
    else if (s->percentage >= 55)
    {
        strcpy(s->grade, "C");
        s->cgpa = 5;
    }
    else
    {
        strcpy(s->grade, "D");
        s->cgpa = 4;
    }
}
