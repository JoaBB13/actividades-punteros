#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int a[2][3]={0};
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			*(*(a+i)+j)=1+rand()%9;
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("%d\t",*(*(a+i)+j));
		}
		printf("\n");
	}
	return 0;
}

