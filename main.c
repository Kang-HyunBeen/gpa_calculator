#include "functions.h"

int main(void) {
  printf("Gpa - Calculator\n"); //title

  int cour, maj; // num of course and major
  getCourses(&cour, &maj); //user input

  float **grades; // 2 dimensional array that contains course units and grades.
  grades = (float**)malloc(sizeof(float*)*cour);
  for(int i=0; i<cour; i++){
    grades[i] = (float*)malloc(sizeof(float)*2);
  }
  getGrades(grades, cour, maj); // user input

  float mgpa = cal_Mgpa(grades, maj); // calculate major gpa
  float gpa = cal_Gpa(grades, cour); // calculate all courses gpa
  
  printGpa(gpa, mgpa); // print result

  return 0;
}
