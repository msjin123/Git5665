#include <stdio.h>
#include <stdbool.h>
bool isprime(int n){
	for (int i=2; i<n; i++){
		if (n%i==0){
			return false;
		}	
	}
	return true;
}
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
	printf("\n");
	printf("Prime Numbers\n");
	for (int i=1; i<=100; i++){
		if (isprime(i)==true){
			printf("%d ",i);
		}
	}
	// 12341
	return 0;
}

