#include <stdio.h>
#include "report.h"

void printHeader()
{
    printf("\nID\tName\tTotal\t%%\tGrade\tCGPA\n");
    printf("--------------------------------------------\n");
}

void printStudent(struct student s)
{
    printf("%s\t%s\t%d\t%.2f\t%s\t%d\n",
           s.id, s.name, s.total,
           s.percentage, s.grade, s.cgpa);
}

void printSummary(float avg, float high, float low, int gradeCount[])
{
    printf("\nClass Average : %.2f\n", avg);
    printf("Highest Score : %.2f\n", high);
    printf("Lowest Score  : %.2f\n", low);

    printf("\nGrade Count:\n");
    printf("O:%d A+:%d A:%d B+:%d B:%d C:%d D:%d F:%d\n",
           gradeCount[0], gradeCount[1], gradeCount[2],
           gradeCount[3], gradeCount[4], gradeCount[5],
           gradeCount[6], gradeCount[7]);
}
