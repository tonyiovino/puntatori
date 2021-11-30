#include <stdio.h>
#include "myvect.h"
#include "myvect_utils.h"

void print_vect(int v[], const int size);

int main() {

	#define SIZE_V 20 

	int v[SIZE_V];

	myvect_init();

	printf("Okay, ora generiamone qualcuno\n");
	myvect_random(v, SIZE_V, 1, 20);
	myvect_apply(v, SIZE_V, *print_vect(v));

	return 0;
}

void print_vect(int v[], const int size){
	int i;

	for (i = 0; i < size; i++) {
		printf("%d ", v[i]);
	}
	putchar('\n');
}