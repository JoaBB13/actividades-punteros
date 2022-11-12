#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	int nota1=0, nota2=0, nota3=0, *ptr1, *ptr2, *ptr3; 
	float promedio=0, *ptrprom;;
	ptr1=&nota1;
	ptr2=&nota2;
	ptr3=&nota3;
	ptrprom=&promedio;
	printf("Ingrese las notas\n");
	scanf("%d",*ptr1);
	scanf("%d",*ptr2);
	scanf("%d",*ptr3);
	promedio=(float)(*ptr1+*ptr2+*ptr3)/3;
	printf("%.2f",*ptrprom);
	return 0;
}
