#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int arreglo[10]={0};
	float promedio=0;
	float suma=0;
	float *ptrprom;
	int *ptr;
	float *ptrsuma;
	ptr=&arreglo[0];
	ptrprom=&promedio;
	ptrsuma=&suma;
	printf("ingrese 10 numeros:\n");
	for(int i=0;i<10;i++){
		scanf("%d\n",&*(ptr+i));
	}
	for(int i=0;i<10;i++){
		*ptrsuma+=*(ptr+i);
	}
	printf("la suma es: %0.1f",*ptrsuma);
	*ptrprom=*ptrsuma/(float)10;
	printf("\nel promedio es: %0.1f",*ptrprom);
	return 0;
}

