void myvect_apply(int v[], const int size, void *f(int *val)){
    int i;

    for(i = 0; i < size; i++){
        f( &v[ i ] );
    }
}