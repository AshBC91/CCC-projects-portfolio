#include <iostream>
#include <cstdio>

using namespace std;

class FFseq {
    public:
    
    void generateValues () {
        int *sequences, *sqIter;
        sequences = (int *)malloc( 10*sizeof (int));
        sqIter = sequences;

        //Fibonacci sequence
        for ( int n = 0; n < 10; n++) {
            if ( n == 0 ) *sqIter = n;
            else if ( n == 1 ) *sqIter = *(sqIter-1) + n;
            else *sqIter = *(sqIter-1) + *(sqIter-2);
            sqIter++;
        }

        //Factorial sequence
        for ( int i = 20; i >= 10; i-- ) {
            for ( int m = 1; m < i-9; m++ ) {
                if ( m == 1 ) *sqIter = 1;
                else *sqIter=*sqIter*m;
            }
            sqIter++;
        }

        int width = sizeof ( *(sqIter-1) ) * 3 + 9;
        string border (width, '=');
        string line (width, '-');
        cout << endl << ' ' << border << ' ' << endl;
        printf( " |   fib   |   fac   | \n");
        cout << ' ' << line << ' ' << endl;
        sqIter = sequences;
        for ( int m = 0; m < 10; m++) {
            printf( " | %7d | %7d | \n", *sqIter, *(sqIter+10));
            sqIter++;
        }
        cout << ' ' << border << ' ' << endl;     
    }
};

int main() {

    FFseq Test;
    
    cout << "\nThis program prints a table with two columns and up to 10 rows. One column contains a Fibonacci Sequence and the other a Factorial Sequence.\n";
    
    Test.generateValues();

    return 0;
}