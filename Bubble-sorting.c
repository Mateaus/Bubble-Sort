#include <stdio.h>
#include <string.h>

typedef struct
{
  char szCourseName[30];
  int dCourseIDs;
} Course;

void sortById(Course courseM[], int iCourseCnt);

int main()
{
  Course courseM[] = {{"Math", 50}
                     ,{"CS", 10}
                     ,{"Science", 20}
                     ,{"Business", 30}
                     ,{"Engineering", 15}
                     ,{"Communications", 25}};
  int N = sizeof(courseM)/sizeof(courseM[0]);
  int i;

  sortById(courseM, N);
  for(i = 0; i < N; i++){
    printf("[%d]", courseM[i].dCourseIDs);
    printf("[%s]\n", courseM[i].szCourseName);
  }

  return 0;
}

void sortById(Course courseM[], int iCourseCnt)
{
  int i,j;
  Course swap;

  for(i = 0; i < iCourseCnt; i++){
    for(j = 0; j < (iCourseCnt - 1); j++){
      if(courseM[j].dCourseIDs > courseM[j+1].dCourseIDs){
        swap = courseM[j];
        courseM[j] = courseM[j+1];
        courseM[j+1] = swap;
      }
    }
  }
  return;
}
