#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a=0, b=0, c=0, d=0, *dir_a=NULL, *dir_b=NULL;
	printf("ingrese el valor a:\n");
	scanf("%d",&a);
	printf("ingrese el valor b:\n");
	scanf("%d",&b);
	dir_a=&a;
	dir_b=&b;
	printf("direccion de memoria de la variable a:%x\n",&a);
	printf("valor de la variable a:%d\n",a);
	printf("valor del puntero a:%x\n",dir_a);
	printf("valor al que apunta el puntero a:%x\n",a);
	printf("direccion de memoria de la variable b:%x\n",&b);
	printf("valor de la variable b:%d\n",b);
	printf("valor del puntero b:%x\n",dir_b);
	printf("valor al que apunta el puntero b:%x\n",b);
	c=*dir_b;
	d=*dir_a;
	*dir_a=c;
	*dir_b=d;
	printf("nuevo valor de la variable a:%d\n",a);
	printf("nuevo valor de la variable b:%d\n",b);
	return 0;
}
