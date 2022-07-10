#include <iostream>
#include <cstdio>

using namespace std;

class FFseq {
    public:
        
    int *generateFib (int *sequences) {

        int *sqIter;
        sqIter = sequences;

        //Fibonacci sequence
        for ( int n = 0; n < 10; n++) {
            if ( n == 0 ) *sqIter = n;
            else if ( n == 1 ) *sqIter = *(sqIter-1) + n;
            else *sqIter = *(sqIter-1) + *(sqIter-2);
            sqIter++;
        }

        return sequences;
    }

    int *generateFac (int *sequences) {
        
        int *sqIter;
        sqIter = sequences;

        //Factorial sequence
        for ( int i = 20; i >= 10; i-- ) {
            for ( int m = 1; m < i-9; m++ ) {
                if ( m == 1 ) *sqIter = 1;
                else *sqIter=*sqIter*m;
            }
            sqIter++;
        }

        return sequences;
    }

    void display (int **sequences) {

        char largenumber = **(sequences+1);
        int width = sizeof ( largenumber*2 ) * 3 + 9;

        printf("\n ");
        for ( int n = 0; n < width; n++)
            printf( "=");
        printf(" \n");

        printf( " |   fib   |   fac   | \n ");

        for ( int n = 0; n < width; n++)
            printf( "-");
        printf(" \n");

        for ( int n = 0; n < 10; n++)
            printf( " | %7d | %7d | \n", sequences[0][n], sequences[1][n]);

        printf(" ");
        for ( int n = 0; n < width; n++)
            printf( "=");
        printf(" \n");
    }
};

int main() {
    int **genseq, **gsiter;
    genseq = (int **)malloc(20 * sizeof(int));
    *genseq = (int *)malloc(10* sizeof(int));
    gsiter = genseq;

    FFseq Test;

    cout << "\nThis program prints a table with two columns and up to 10 rows. One column contains a Fibonacci Sequence and the other a Factorial Sequence.\n";

    *gsiter = Test.generateFib(*gsiter);
    gsiter++;
    *gsiter = Test.generateFac(*gsiter);

    Test.display(genseq);

    return 0;
}