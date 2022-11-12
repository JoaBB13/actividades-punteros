#include <iostream>
#include <ctime>
using namespace std;
void maximo(int *ptr);
void minimo(int *ptr);
void sumatoria(int *ptr);
int main(int argc, char *argv[]) {
	srand(time(NULL));
	int arreglo[5]={0};
	int *ptr;
	ptr=&arreglo[0];
	for(int i=0;i<5;i++){
		*(ptr+i)=1+rand()%9;
	}
	for(int i=0;i<5;i++){
		printf("%d\t",*(ptr+i));
	}
	printf("\n");
	maximo(ptr);
	printf("\n");
	minimo(ptr);
	sumatoria(ptr);
	return 0;
}

void maximo(int *p){
	int max=0;
	int i=0;
	int *ptrmax;
	ptrmax=&max;
	for(i=0; i<5; i++){
		if(*ptrmax<*(p+i)){
			*ptrmax=*(p+i);
		}
	}
	printf("el maximo es: %d",max);
}
void minimo(int *p){
	int min=*p;
	int i=0;
	int *ptrmin;
	ptrmin=&min;
	for(i=0; i<5; i++){
		if(*ptrmin>*(p+i)){
			*ptrmin=*(p+i);
		}
	}
	printf("el minimo es: %d\n",min);
}
void sumatoria(int *p){
	int sum=0;
	int *ptrsum;
	ptrsum=&sum;
	int i=0;
	for(i=0; i<5; i++){
		*ptrsum+=*p;
		p++;
	}
	printf("el valor de la suma de todos los valores es: %d",*ptrsum);
}
