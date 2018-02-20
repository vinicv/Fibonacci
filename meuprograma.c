#include <stdio.h>
#include <stdlib.h>

int fib(int n){
	int f, anterior, aux, f;
	anterior = 1;
	f = 1;
	for(i = 2; i < n; i++){
		aux = f;
		f = f + anterior;
		anterior = aux;
	}
	return f; 
}

void main(){
	int n;
	
	for(n = 1; n <= 20; n++){
		printf("%d ", fib(n));
	}
	
	print("\n");
}
	

