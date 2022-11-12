#include <iostream>
#include <ctime>
using namespace std;
void pares(int *ptr);
void impares(int *ptr);
int main(int argc, char *argv[]) {
	srand(time(NULL));
	int arreglo[10]={0};
	int *ptr;
	ptr=&arreglo[0];
	for(int i=0;i<10;i++){
		*(ptr+i)=1+rand()%9;
	}
	for(int i=0;i<10;i++){
		printf("%d\t",*(ptr+i));
	}
	pares(ptr);
	impares(ptr);
	return 0;
}
void pares(int *a){
	printf("\nLos numeros en posiciones pares son: \n");
	for(int i=0;i<10;i++){
		if(i%2==0){
			printf("%d\n",*(a+i));
		}
	}
}
void impares(int *a){
	printf("\nLos numeros en posiciones impares son: \n");
	for(int i=0;i<10;i++){
		if(i%2!=0){
			printf("%d\n",*(a+i));
		}
	}
}
