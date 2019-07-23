#include <stdio.h>
#include <string.h>

struct Students{
	char name[20];
	char surname[20];
	int number;
};

int main(){
	struct Students student1;
	struct Students *student_p;

	strcpy(student1.name,"Ahmet");
	strcpy(student1.surname,"Incir");
	student1.number = 53;

	student_p = &student1;

	printf("%s %s %d\n",student_p->name , student_p->surname , student_p->number);

}
