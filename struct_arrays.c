#include <stdio.h>
#include <string.h>

struct ogrenci{
	char isim[20];
	char soyisim[20];
	int numara;
};

int main(){
	int i;
	struct ogrenci ogrenciler[3];

	for(i=0 ; i<3 ; i++){
		printf("%d. ogrencnin bilgilerini girin\n",i+1);
		scanf("%s%s%d",&ogrenciler[i].isim , &ogrenciler[i].soyisim , &ogrenciler[i].numara);
	}

	for(i=0 ; i<3 ; i++){
		printf("%d. ogrenci\n",i+1);
		printf("%s %s %d\n",ogrenciler[i].isim , ogrenciler[i].soyisim , ogrenciler[i].numara);
	}

}
