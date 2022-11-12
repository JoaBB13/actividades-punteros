#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	int num1=0, num2=0, potencia, *dir_num1, *dir_num2;
	float resultado=0, raiz=0;
	char opcion=' ';
	printf("ingrese dos numeros\n");
	scanf("%d",&num1);
	scanf("%d",&num2);
	dir_num1=&num1;
	dir_num2=&num2;
	do{
		printf("Menu de opciones\n");
		printf("a.sumar\nb.restar\nc.multiplicar\nd.dividir\ne.elevar a una potencia\nf.calcular raiz\n");
		scanf(" %c",&opcion);
		switch(opcion){
		case 'a':
			resultado=*dir_num1+*dir_num2;
			printf("la respuesta es: %.2f",resultado);
			break;
		case 'b':
			resultado=*dir_num1-*dir_num2;
			printf("la respuesta es: %.2f",resultado);
			break;
		case 'c':
			resultado=*dir_num1 *  *dir_num2;
			printf("la respuesta es: %.2f",resultado);
			break;
		case 'd':
			resultado=(float)*dir_num1/ (float)*dir_num2;
			printf("la respuesta es: %.2f",resultado);
			break;
		case 'e':
			printf("Ingrese la potencia:\n");
			scanf("%d",&potencia);
			resultado=pow(*dir_num1,potencia);
			printf("la respuesta es: %.2f\n",resultado);
			resultado=pow(*dir_num2,potencia);
			printf("la respuesta es: %.2f\n",resultado);
			break;
		case 'f':
			raiz=sqrt(*dir_num1);
			printf("%f",num1);
			raiz=sqrt(*dir_num2);
			printf("%f",num2);
			break;
		}
		printf("continuar\n");
		scanf(" %c",&opcion);
	} while(opcion=='s');
}
