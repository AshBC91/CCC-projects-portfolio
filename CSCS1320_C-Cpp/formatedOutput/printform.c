#include <stdio.h>

void ASCII( int min, int max ) {
    printf( "\n  ASCII | Dec\t| Octal\t| Hex\t\n");
    for ( int i = 0; i != 31; i++ ) printf( "%c", '-' );
    //int a = 109;
    //printf("\n   %c\t| %u\t| %o\t| %X\t", a, a, a, a);
    for ( min; min <= max; min++ ) printf("\n   %c\t| %u\t| %o\t| %X\t", min, min, min, min);
};


int main( ) {
    int min;
    int max;

    printf("Enter a range between the numbers 0 - 127. ");
    printf("\nWhat is the min: ");
    scanf("%d", &min );
    
    printf("What is the max: ");
    scanf("%d", &max );
    
    ASCII( min, max );
    return 0;
}