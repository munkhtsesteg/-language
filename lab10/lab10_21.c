
   
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student{
	char fname[20], lname[20], id[10];
	float golch;
};
typedef struct Student Student;
// n oyutnii medeelliig garaas awch a hvsnegted hadgalna
void read_students(Student a[], int n);
// a hvsnegted hadgalsan n oyutnii medeelliig hevlene
void print_students(Student a[] , int n);
// st oyutnii medeelliig hevlene
void print(Student st);
// a hvsnegted hadgalsan oyutnii medeellees fname neriig haina
// Ug nertei oyutan oldoj baigaa bol hvsnegtiin dugaariig vgvi bol -1 utgiig bucaana
int search_by_fname(Student a[], int n, char fname[]);
int search_by_lname(Student a[], int n, char lname[]);
int search_by_id(Student a[], int n, char id[]);
int search_by_golch(Student a[], int n, float golch);
void sort_by_golch(Student a[], int n);

int main()
{
	Student a[100];
	int n, cmd, idx;
	printf("Oyutnii too: ");
	scanf("%d", &n);
	read_students(a, n);
	print_students(a, n); // Ene hvreed niit jagsaaltaa oruulaad hevlechihne
	char fname[20], lname[20], id[20];
	float golch;
	while(1)
	{
		printf("1: Nereer xaix, 2: Ovgoor haih, 3: ID-aar haih, 4: Golchoor haih, 5: Golchoor erembleh, 6: Xevlex, 7: Garax\n");
		scanf("%d", &cmd);
		if(cmd==1){
			printf("Xaix ner: ");
			scanf("%s", fname);
			idx = search_by_fname(a , n, fname);
			if(idx==-1)
				printf("Oyutan oldsongui\n");
			else
				print(a[idx]);
		}	
		else if(cmd==2){
				printf("Xaix ovog: ");
				scanf("%s", lname);
				idx = search_by_lname(a, n, lname);
				if(idx==-1)
					printf("Oyutan oldsongui\n");
				else
					print(a[idx]);
		}	
		else if(cmd==3){
			printf("Xaix id: ");
			scanf("%s", id);
			idx = search_by_id(a, n, id);
			if(idx==-1)
				printf("Oyutan oldsongui\n");
			else
				print(a[idx]);
		}	
		else if(cmd==4){
			printf("Xaix golch: ");
			scanf("%f", &golch);
			idx = search_by_golch(a, n, golch);
			if(idx==-1)
				printf("Oyutan oldsongui\n");
			else
				print(a[idx]);
				
		}	
		else if(cmd==5)
			sort_by_golch(a, n);
		else if(cmd==6)
			print_students(a, n);
			else
				break;
	}
	return 0;
}

void print(Student st)
{
	printf("Ner: %s\n", st.fname);
	printf("Ovog: %s\n", st.lname);
	printf("Id: %s\n", st.id);
	printf("Golch: %lf\n", st.golch);
}

void read_students(Student a[], int n)
{
	int i;
	for(i = 0; i < n; i++){
		printf("%d-r hvnii id, ovog ner, golch: \n", i);
		scanf("%s", a[i].id);
		scanf("%s", a[i].lname);
		scanf("%s", a[i].fname);
		scanf("%f", &a[i].golch);
	}
}

void print_students(Student a[] , int n)
{
	int i;
	for(i = 0; i < n; i++){
	printf("id: %s Ovog ner: %s %s Golch: %f\n", a[i].id, a[i].lname, a[i].fname, a[i].golch);
	}
}

int search_by_fname(Student a[], int n, char fname[])
{
	int i;
	for(i = 0; i < n; i++){
		if(strcmp(fname, a[i].fname)==0)
			return i;
	}
	return -1;
}

int search_by_lname(Student a[], int n, char lname[])
{
	int i;
	for(i = 0; i < n; i++){
		if(strcmp(lname, a[i].lname)==0)
			return i;
	}
	return -1;
}

int search_by_id(Student a[], int n, char id[])
{
	int i;
	for(i = 0; i < n; i++){
		if(strcmp(id, a[i].id)==0)
			return i;
	}
	return -1;
}

int search_by_golch(Student a[], int n, float golch)
{
	int i;
	for(i = 0; i < n; i++){
		if(golch == a[i].golch)
			return i;
	}
	return -1;
}

void sort_by_golch(Student a[], int n)
{
	int i, j;
	Student tmp;
	for(i = 0; i < n; i++){
		for(j = 0; j < n - i - 1; j++){
			if(a[j].golch > a[j+1].golch)
			{
				tmp = a[j+1];
				a[j+1] = a[j];
				a[j] = tmp;
			}
		}
	}
}
