#include "functions.h"

int main(void) {
  printf("Gpa - Calculator\n");

  int cour, maj;
  getCourses(&cour, &maj);

  float **grades;
  grades = (float**)malloc(sizeof(float*)*cour);
  for(int i=0; i<cour; i++){
    grades[i] = (float*)malloc(sizeof(float)*2);
  }

  getGrades(grades, cour, maj);

  float mgpa = cal_Mgpa(grades, maj);
  float gpa = cal_Gpa(grades, cour);
  
  printGpa(gpa, mgpa);

  return 0;
}
