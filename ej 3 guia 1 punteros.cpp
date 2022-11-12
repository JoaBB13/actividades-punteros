#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	int a=13, *dir_a;
	dir_a=&a;
	printf("direccion de memoria de la variable:%x\n",&a);
	printf("valor de la variable:%d\n",a);
	printf("valor del puntero:%x\n",dir_a);
	printf("valor al que apunta el puntero:%d\n",*dir_a);
	return 0;
}
