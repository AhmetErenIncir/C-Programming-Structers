#include <stdio.h>
#include <string.h>

struct Car{
	int wheels;
	int Shifting;
	double engine;
	int hp;
	int year;
}car1,car2;

int main(){
	car1 = {4,6,3.8,420,2006};
	car2 = car1;
	printf("%d %d %.2lf %d %d\n",car2.wheels,car2.Shifting,car2.engine,car2.hp,car2.year);
}
