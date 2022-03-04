#include <stdio.h>
#include "myvect.h"
#include "myvect_utils.h"

void print_num(int *num);

int main() {

	#define SIZE_V 20 

	int v[SIZE_V];

	myvect_init();

	printf("Okay, ora generiamone qualcuno\n");
	myvect_random(v, SIZE_V, 1, 20);
	myvect_apply(v, SIZE_V, print_num);
	putchar('\n');

	return 0;
}

void print_num(int *num){

	printf("%d ", *num);
}