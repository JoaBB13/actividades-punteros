#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char a[27]={' '};
	char *ptr;
	ptr=a;
	for(int i=0;i<26;i++){
		a[i]=65+i;
	}
	for(int i=0;i<26;i++){
		printf(" %c",toupper(*ptr+i));
	}
	printf("\n");
	for(int i=0;i<26;i++){
		printf(" %c",tolower(*ptr+i));
	}
	return 0;
}

