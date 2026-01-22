#include <stdio.h>

#include "student.h"
#include "file_io.h"
#include "validation.h"
#include "result.h"
#include "statistics.h"
#include "report.h"

int main()
{
    FILE *fp;
    struct student s[50];
    int n, i, j;
    int gradeCount[8] = {0};

    float avg, high, low;

    /* open input file */
    fp = fopen("data/students.txt", "r");
    if (fp == NULL)
    {
        printf("Unable to open file\n");
        return 0;
    }

    /* read number of students */
    n = readStudentCount(fp);

    /* read student data */
    for (i = 0; i < n; i++)
    {
        readStudentData(fp, s, i);

        /* validation */
        if (!validateID(s[i].id))
            printf("Invalid ID for student %d\n", i + 1);

        if (!validateName(s[i].name))
            printf("Invalid Name for student %d\n", i + 1);

        for (j = 0; j < SUBJECTS; j++)
        {
            if (!validateMarks(s[i].marks[j]))
                s[i].marks[j] = 0;
        }

        /* result calculation */
        calculateTotalAndPercentage(&s[i]);
        assignGradeAndCGPA(&s[i]);
    }

    fclose(fp);

    /* statistics */
    avg = calculateAverage(s, n);
    high = findHighest(s, n);
    low = findLowest(s, n);
    countGrades(s, n, gradeCount);

    /* output */
    printHeader();
    for (i = 0; i < n; i++)
        printStudent(s[i]);

    printSummary(avg, high, low, gradeCount);

    return 0;
}
