#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
        char name[100];
        int age;
        int gpa;
};
typedef struct Student Student;

void countSort(Student a[], int n);
int main()
{
        Student a[100];
        FILE *fin = NULL, *m;
        fin = fopen("students.txt", "r");
        if (!fin) {
                printf("input file error!\n");
                exit(-1);
        }
        int i, n;
       fscanf(fin, "%d", &n);

        for (i = 0; i < n; i++) {
                fscanf(fin, "%s%d%d", a[i].name, &a[i].age, &a[i].gpa);
        }
        fclose(fin);

        countSort(a, n);
        m = fopen("neg.txt","w");
        for (i = 0; i < n; i++){  
          fprintf(m,"%d\t%d\t%s\n", a[i].gpa, a[i].age, a[i].name);
        }
          fclose(m);
        //        sortGPA(a, n) хийсэн үр дүнг файлд бичиж хадгалах,Тэгэхдээ дүнг нь эхний багананд хадгалах



        return 0;
}
void countSort(Student a[], int n){
  int a1[100], x,a2[100];
  
  x = a[0].gpa;
  for (int i = 1; i < n; i++) {
    if (a[i].gpa > x)
      x = a[i].gpa;
  }

  
  int count_a[100];

  for (int i = 0; i <= x; ++i) {
    count_a[i] = 0;
  }

  for (int i = 0; i < n; i++) {
    count_a[a[i].gpa]++;
  }

  for (int i = 1; i <= x; i++) {
    count_a[i] += count_a[i - 1];
  }

 char ner[100];
  for (int i = n - 1; i >= 0; i--) {
    a1[count_a[a[i].gpa] - 1] = a[i].gpa;
    a2[count_a[a[i].gpa] - 1] = a[i].age;
    count_a[a[i].gpa]--;
  }

  for (int i = 0; i < n; i++) {
    a[i].gpa = a1[i];
    a[i].age = a2[i];
  }
}




