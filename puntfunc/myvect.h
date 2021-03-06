#ifndef MY_VECT
#define MY_VECT

void myvect_init(void);
void myvect_zeroes(int v[], const int size);
void myvect_ones(int v[], const int size);
void myvect_sequence(int v[], const int size, const int start, const int step);
void myvect_random(int v[], const int size, const int min, const int max);
void myvect_print(const int v[], const int size);
void myvect_reverse(int v[], const int size);
void myvect_swap(int v[], int i, int j, const int size);

#endif