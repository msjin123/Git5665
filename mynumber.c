#include <stdio.h>
int main(){
	printf("Odd Numbers\n");
	for (int i=1; i<=100; i++){
		if (i%2!=0){
			printf("%d ",i);
		}
	}
	printf("\n");
	printf("Even Numbers\n");
	for(int i=1; i<=100; i++){
		if (i%2==0){
			printf("%d ",i);
		}
	}
	return 0;
}

