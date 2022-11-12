#include <iostream>
using namespace std;
void mayusculas(char *ptr);
void minusculas(char *ptr);
int main(int argc, char *argv[]) {
	char a[27]={' '};
	char *ptr;
	ptr=a;
	for(int i=0;i<26;i++){
		a[i]=65+i;
	}
	mayusculas(ptr);
	minusculas(ptr);
	return 0;
}

void mayusculas(char *p){
	for(int i=0;i<26;i++){
		printf(" %c",toupper(*p+i));
	}
}
void minusculas(char *p){
	printf("\n");
	for(int i=0;i<26;i++){
		printf(" %c",tolower(*p+i));
	}
}
