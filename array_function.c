// Record a neat way to conduct operation on 1D and 2D array

#include <stdio.h>


void op_array (int * a, int N) {
    for (int i = 0; i < N; i++) {
        a[i] = 0;
    }
}

void print_array1D (int * a, int N) {
    for (int i = 0; i < N; i++) {
       printf("%d ", a[i]);
    }
}


void print_array2D1 (int * a, int N, int M) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ",a[i*M + j]);
        }
    }
}

int main() {
    int a[4][3] = {{1,2,3},{2,3,4},{3,4,5},{4,5,6}};
    int b[12] = {1,2,3,2,3,4,3,4,5,4,5,6};


    print_array2D1(*a, 3,4);
    printf("\n");
    print_array1D(b, 12);


    // &a -> int * [3][3]
    // a-> int * [3]
    // *a -> int *
    // **a -> int

    return 0;

}
