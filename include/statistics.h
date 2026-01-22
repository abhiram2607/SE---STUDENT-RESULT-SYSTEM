#ifndef STATISTICS_H
#define STATISTICS_H

#include "student.h"

float calculateAverage(struct student s[], int n);
float findHighest(struct student s[], int n);
float findLowest(struct student s[], int n);
void countGrades(struct student s[], int n, int gradeCount[]);

#endif
