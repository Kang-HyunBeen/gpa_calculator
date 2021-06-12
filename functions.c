#include "functions.h"

void getCourses(int *cour, int *maj){
  printf("Enter the number of all courses.\n Number: ");
  scanf("%d", cour);
  printf("Enter the number of major courses.\n Number: ");
  scanf("%d", maj);
}

void getGrades(float **grades, int cour, int maj){
  float uinput, ginput;
  printf("Enter the \"units\" and \"grades\" of your major courses.  Ex) 3, 4.0 \n");
  for(int i=0; i<maj; i++){
      printf("units, grade: ");
      scanf("%f, %f",&uinput, &ginput);
      grades[i][0] = uinput;
      grades[i][1] = ginput;
  }
  printf("Enter the \"units\" and \"grades\" of your remaining courses.  Ex) 3, 4.0 \n");
  for(int i=maj; i<cour; i++){
      printf("units, grade: ");
      scanf("%f, %f",&uinput, &ginput);
      grades[i][0] = uinput;
      grades[i][1] = ginput;
  }
}

float cal_Mgpa(float **grades, int maj){
  float mgpa=0, sum=0;
  for(int i=0; i<maj; i++){
    mgpa += grades[i][0];
  }
  for(int i=0; i<maj; i++){
    sum += grades[i][0] * grades[i][1];
  }
  mgpa = sum / mgpa;

  return mgpa;
}

float cal_Gpa(float **grades, int cour){
  float gpa=0, sum=0;
  for(int i=0; i<cour; i++){
    gpa += grades[i][0];
  }
  for(int i=0; i<cour; i++){
    sum += grades[i][0] * grades[i][1];
  }
  gpa = sum / gpa;
  return gpa;
}

void printGpa(float gpa, float mgpa){
  printf("gpa of all courses : %.2f \ngpa of major courses: %.2f\n ", gpa, mgpa);
}

