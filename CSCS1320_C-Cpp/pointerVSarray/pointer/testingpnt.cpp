#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    int **pnter;
    pnter = (int **)malloc(sizeof(int));
    *pnter = (int *)malloc(sizeof(int));
    **pnter = 100;
    printf("Column 1: %p\n", pnter);
    printf("Column 2: %p\n", *pnter);
    printf("Value: %d\n", **pnter);

    for (int n = 0; n < 10; n++) {
        printf("n: %d\n", n );
        printf("Column 1: %p\n", pnter+n);
        printf("Column 2: %p\n", *pnter+n);
        printf("Value: %d\n", **pnter+n);
    }


    printf("\nEnd of line...\n");


    return 0;
}