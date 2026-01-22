#include "statistics.h"

float calculateAverage(struct student s[], int n)
{
    int i;
    float sum = 0;

    for (i = 0; i < n; i++)
    {
        sum += s[i].percentage;
    }

    return sum / n;
}

float findHighest(struct student s[], int n)
{
    int i;
    float high = s[0].percentage;

    for (i = 1; i < n; i++)
    {
        if (s[i].percentage > high)
            high = s[i].percentage;
    }

    return high;
}

float findLowest(struct student s[], int n)
{
    int i;
    float low = s[0].percentage;

    for (i = 1; i < n; i++)
    {
        if (s[i].percentage < low)
            low = s[i].percentage;
    }

    return low;
}

void countGrades(struct student s[], int n, int gradeCount[])
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (s[i].grade[0] == 'O')
            gradeCount[0]++;
        else if (strcmp(s[i].grade, "A+") == 0)
            gradeCount[1]++;
        else if (strcmp(s[i].grade, "A") == 0)
            gradeCount[2]++;
        else if (strcmp(s[i].grade, "B+") == 0)
            gradeCount[3]++;
        else if (strcmp(s[i].grade, "B") == 0)
            gradeCount[4]++;
        else if (strcmp(s[i].grade, "C") == 0)
            gradeCount[5]++;
        else if (strcmp(s[i].grade, "D") == 0)
            gradeCount[6]++;
        else
            gradeCount[7]++;
    }
}
