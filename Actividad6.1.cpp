#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 10   

void llenaArreglo(int *a);
void suma(int *A, int *B, int *C);

int main(){
    int *a, *b, *c;

    srand(time(NULL));

    a = (int*)malloc(sizeof(int) * n);
    b = (int*)malloc(sizeof(int) * n);
    c = (int*)malloc(sizeof(int) * n);

    if(a == NULL || b == NULL || c == NULL){
        printf("Error al reservar memoria\n");
        return 1;
    }

    printf("Arreglo A:\n");
    llenaArreglo(a);

    printf("Arreglo B:\n");
    llenaArreglo(b);

    printf("Suma C = A + B:\n");
    suma(a, b, c);

    free(a);
    free(b);
    free(c);

    return 0;
}

void llenaArreglo(int *a){
    int i;
    for(i = 0; i < n; i++){
        a[i] = rand() % n;
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void suma(int *A, int *B, int *C){
    int i;
    for(i = 0; i < n; i++){
        C[i] = A[i] + B[i];
        printf("%d\t", C[i]);
    }
    printf("\n");
}

