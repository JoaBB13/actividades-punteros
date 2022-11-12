#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float vector[5]={4.5,8,2.3,1.1,3};
	float suma=0;
	int i=0;
	float promedio=0;
	float *ptrvector;
	float *p1;
	float *p2;
	p2=&promedio;
	p1=&suma;
	ptrvector=vector;
	for(i=0;i<5;i++){
		*p1+=*(ptrvector++);
	}
	printf("la suma es: %0.1f",*p1);
	*p2=*p1/5;
	printf("el promedio es: %0.1f",*p2);
	return 0;
}

