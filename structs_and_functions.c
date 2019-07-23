#include <stdio.h>
#include <string.h>

struct ogrenci{
	char isim[20];
	char soyisim[20];
	int numara;
};

void goster(struct ogrenci a){
	printf("Ogrenci bilgileri\n");
	printf("%s\n",a.isim);
	printf("%s\n",a.soyisim);
	printf("%d\n",a.numara);
}

struct ogrenci doldur(){
	struct ogrenci yeni;
	printf("Ogrenci bilgileri girin\n");
	scanf("%s %s %d",&yeni.isim,&yeni.soyisim,&yeni.numara);
	return yeni;
}

int main(){
	struct ogrenci ogrenci1 = {"Ahmet Eren"  , "Incir" , 46};
	struct ogrenci ogrenci2;
	goster(ogrenci1);
	ogrenci2 = doldur();
	goster(ogrenci2);
}
