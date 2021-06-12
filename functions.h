#include <stdio.h>
#include <stdlib.h>

void getCourses(int *cour, int *maj);
void getGrades(float **grades, int cour, int maj);
float cal_Mgpa(float **grades, int maj);
float cal_Gpa(float **grades, int cour);
void printGpa(float gpa, float mgpa);


