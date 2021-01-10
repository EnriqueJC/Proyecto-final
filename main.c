#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int *pb,*pc;
	int a[5]={10,20,30,40,50};
	int i=0;
	pb=a;
	*pb=11;
	printf("a -> %d\n",a);
	for(i=0;i<5;i++){
		printf("Elemento %d -> %d\n",i,a[i]);
	}
	pc=&a[3];
	*pb=44;
	printf("a -> %d\n",a);
	for(i=0;i<5;i++){
		printf("Elemento %d -> %d\n",i,a[i]);
	}
	return 0;
}
