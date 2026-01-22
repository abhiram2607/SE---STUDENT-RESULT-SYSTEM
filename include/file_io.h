#ifndef FILE_IO_H
#define FILE_IO_H

#include <stdio.h>
#include "student.h"

int readStudentCount(FILE *fp);
void readStudentData(FILE *fp, struct student *s, int index);

#endif
