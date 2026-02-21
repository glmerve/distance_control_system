#include <stdio.h>
#include <time.h>
//Otonom Araç Mesafe Kontrol Sistemi
void sensorVerisiOku(int[], int);
void acilDurumFreni(int[],int);
int enYakinEngel(int[],int);
float ortMesafe(int[],int);
void mesafeleriSirala(int[], int);

int main(){
	
	srand(time(NULL));
	int sensorler[10];
	int boyut=10;
	
	sensorVerisiOku(sensorler,boyut);
	acilDurumFreni(sensorler,boyut);
	
	
	int sonuc= enYakinEngel(sensorler,boyut);
	printf("en yakin engel %d cm uzakliktadir\n",sonuc);
	
	if(ortMesafe(sensorler,boyut) > 100){
		printf("YOL ACIK\n");
	}else{
		printf("DIKKATLI SURUS\n");
	}
	
	mesafeleriSirala(sensorler,boyut);

	
	return 0;
}

void sensorVerisiOku(int mesafe[], int boyut){
	
	int i;
	
	for(i=0; i<boyut; i++){
		mesafe[i]= rand() % 201;
		printf("%d\n",mesafe[i]);
	}
}

void acilDurumFreni(int mesafe[], int boyut){
	int i;
	for(i=0; i<boyut; i++){
		if(mesafe[i] < 20){
			printf("!! ACIL DURUM: FREN YAPILIYOR !!\n");
			printf("%d. indiste 20 cm altina dustu.\n",i+1);
		}
	}
}

int enYakinEngel(int mesafe[], int boyut){
	int i;
	int enKisaMesafe=mesafe[0];
	for(i=1; i<boyut; i++){
		if(mesafe[i] < enKisaMesafe){
			enKisaMesafe = mesafe[i];
		}
	}
	
	return enKisaMesafe;
}

float ortMesafe(int mesafe[], int boyut){
	int toplam=0;
	int i;
	float ort;
	for(i=0; i<boyut; i++){
		toplam += mesafe[i];
	}
	ort= (float)toplam / boyut;
	
	return ort;
}

void mesafeleriSirala(int mesafe[], int boyut){
	int i,j,gecici;
	
	for(i=0; i<boyut-1; i++){
		for(j=0; j < boyut-1; j++){
			if(mesafe[j] > mesafe[j+1]){
				gecici = mesafe[j];
				mesafe[j] = mesafe[j + 1];
				mesafe[j + 1] = gecici;
			}
		}
	}
	for(i=0; i<boyut; i++){
		printf("%d\n",mesafe[i]);
	}

}














