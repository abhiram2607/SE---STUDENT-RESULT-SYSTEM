#ifndef REPORT_H
#define REPORT_H

#include "student.h"

void printHeader();
void printStudent(struct student s);
void printSummary(float avg, float high, float low, int gradeCount[]);

#endif
