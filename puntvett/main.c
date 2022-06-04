#include <stdio.h>

int main() {

	const char * const semi[] = { "Cuori", "Quadri", "Fiori", "Picche" };
	int i;

	for (i = 0; i < 4; i++){
		printf("%s\n", semi[i]);
	}

	return 0;
}