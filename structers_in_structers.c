#include <stdio.h>
#include <string.h>

struct Address{
	char mahalle[20];
	char cadde[20];
	char sokak[20];
};

struct Student{
	char name[20];
	char surname[20];
	int number;
	int age;
	struct Address adres;
};

int main(){
	struct Student student1;
	//student1.name = "Ahmet"; hatali.Stringler sadece strcpy ile kopyalanabilir
	strcpy(student1.name , "Ahmet");
	strcpy(student1.surname , "Incir");
	student1.number = 47;
	student1.age = 23;
	strcpy(student1.adres.mahalle , "yavuz sultan mah.");
	strcpy(student1.adres.cadde , "Mevlana cad.");
	strcpy(student1.adres.sokak , "33.sok");
	printf("%s %s %d %d %s %s %s\n",student1.name,student1.surname,student1.number,student1.age,student1.adres.mahalle,student1.adres.cadde,student1.adres.sokak);

}
