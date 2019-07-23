#include <stdio.h>
#include <string.h>

struct Student{
	char name[15];
	char surname[15];
	int number;
	int age;
};

int main(){
	struct Student jake = {"Jake" , "Amberson" , 73326 , 26};
	printf("%s %s %d %d\n",jake.name , jake.surname, jake.number , jake.age);
}
