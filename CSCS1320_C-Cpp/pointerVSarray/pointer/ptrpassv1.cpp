#include <iostream>
#include <cstdio>

using namespace std;

class FFseq {
    public:
        
    int *generateFib (int *sequences) {
        /*printf ("Address of sequences[0]: %p\n", sequences);
        printf ("Value in sequences[0]: %d\n", *sequences);
        printf ("\n");*/

        int *sqIter;
        sqIter = sequences;

        //Fibonacci sequence
        for ( int n = 0; n < 10; n++) {
            //cout << "n: " << n << endl;
            if ( n == 0 ) *sqIter = n;
            else if ( n == 1 ) *sqIter = *(sqIter-1) + n;
            else *sqIter = *(sqIter-1) + *(sqIter-2);
            //if ( n < 9 ) printf("%d, ", *sqIter);
            //else printf("%d\n", *sqIter);
            //printf("Column 1: %p\n", sqIter);
            //printf("Value: %d\n", *sqIter);
            sqIter++;
        }

        //sequences = initialvalue;
        /*printf ("\n");
        printf ("Address of sequences[0]: %p\n", sequences);
        printf ("Value in sequences[0]: %d\n", *sequences);*/

        return sequences;
    }

    int *generateFac (int *sequences) {
        /*printf ("Address of sequences[0]: %p\n", sequences);
        printf ("Value in sequences[0]: %d\n", *sequences);
        printf ("\n");*/
        
        int *sqIter;
        sqIter = sequences;

        //Factorial sequence
        for ( int i = 20; i >= 10; i-- ) {
            //cout << "\n\ni: " << i;
            for ( int m = 1; m < i-9; m++ ) {
                if ( m == 1 ) *sqIter = 1;
                else *sqIter=*sqIter*m;
                //cout << "\nm: " << m;
                //printf("\nsequences[%d]: %p",i,sqIter);
                //printf("\nValue: %d", *sqIter);
            }
            //if ( i > 10 ) printf("%d, ", *sqIter);
            //else printf("%d\n", *sqIter);
            sqIter++;
        }

        /*printf ("\n");
        printf ("Address of sequences[0]: %p\n", sequences);
        printf ("Value in sequences[0]: %d\n", *sequences);*/
        return sequences;
    }

    void display (int **sequences) {
        /*printf ("Address of sequences[0]: %p\n", sequences);
        printf ("Address of sequences[0][0]: %p\n", *sequences);
        printf ("Address of sequences[1]: %p\n", (sequences+1));
        printf ("Address of sequences[1][0]: %p\n", *(sequences+1));
        printf("last value: %d\n", (**(sequences+1)));
        printf("last value: %d\n", sequences[1][0]);*/
        char largenumber = **(sequences+1);
        int width = sizeof ( largenumber*2 ) * 3 + 9;
        //printf( "\nWidth: %i", width);

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
    
    /*printf ("Address of genseq[0]: %p\n", genseq);
    printf ("Address of genseq[1]: %p\n", (genseq+1));
    printf ("Address of iter[0]: %p\n", gsiter);
    printf ("Address of iter[1]: %p\n", (gsiter+1));
    printf ("\n\n");

    printf ("Address of iter[0]: %p\n", gsiter);
    printf ("Address of iter[0][0]: %p\n", *gsiter);
    printf ("Value in iter[0][0]: %d\n", **gsiter);
    printf ("\n");*/

    *gsiter = Test.generateFib(*gsiter);

    /*printf ("\n");
    printf ("Address of iter[0]: %p\n", gsiter);
    printf ("Address of iter[0][0]: %p\n", *gsiter);
    printf ("Value in iter[0][0]: %d\n", **gsiter);
    printf ("Address of iter[0]: %p\n", gsiter);
    printf ("Address of iter[0][9]: %p\n", (*gsiter+9));
    printf ("Value in iter[0][9]: %d\n", *(*gsiter+9));
    printf ("\n");*/

    gsiter++;

    /*printf ("\n");
    printf ("Address of genseq[0]: %p\n", genseq);
    printf ("Address of genseq[1]: %p\n", (genseq+1));
    printf ("Address of iter[0]: %p\n", (gsiter-1));
    printf ("Address of iter[1]: %p\n", gsiter);
    printf ("\n\n");

    printf ("Address of iter[1]: %p\n", gsiter);
    printf ("Address of iter[1][0]: %p\n", *gsiter);
    printf ("Value in iter[1][0]: %d\n", **gsiter);
    printf ("\n");*/

    *gsiter = Test.generateFac(*gsiter);

    /*printf ("\n");
    printf ("Address of iter[1]: %p\n", gsiter);
    printf ("Address of iter[1][0]: %p\n", *gsiter);
    printf ("Value in iter[1][0]: %d\n", **gsiter);
    printf ("Address of iter[1]: %p\n", gsiter);
    printf ("Address of iter[1][9]: %p\n", (*gsiter+9));
    printf ("Value in iter[1][9]: %d\n", *(*gsiter+9));
    printf ("\n");*/

    /*printf ("\n\n");
    printf ("Address of genseq[0]: %p\n", genseq);
    printf ("Address of iter[0]: %p\n", (gsiter-1));
    printf ("\n");*/
    Test.display(genseq);

    return 0;
}