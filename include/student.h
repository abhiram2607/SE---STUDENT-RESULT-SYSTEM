#ifndef STUDENT_H
#define STUDENT_H

#define SUBJECTS 5

struct student {
    char id[20];
    char name[30];
    int marks[SUBJECTS];
    int total;
    float percentage;
    char grade[3];
    int cgpa;
};

#endif
