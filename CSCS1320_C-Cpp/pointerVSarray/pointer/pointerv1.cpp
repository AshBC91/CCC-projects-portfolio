#include <iostream>
#include <cstdio>

using namespace std;
class FFseq {
    public:
    
    void generateValues () {
        //Fibonacci sequence
        int *sequences, *sqIter;
        sequences = (int *)malloc( 20*sizeof (int) );
        sqIter = sequences;

        
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

        //printf("\nColumn 1: %p\n", sqIter-1);
        //printf("Value: %d\n", *(sqIter-1));
        //printf("Column 1: %p\n", sqIter);
        //printf("Value: %d\n", *sqIter);
        
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

        int width = sizeof ( *(sqIter-1) ) * 3 + 9;
        //cout << "\nWidth: " << width << endl;
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
    
    cout << "\nThis program prints table with two columns up to 10 rows, one column contains a Fibonacci Sequence and the other a Factorial Sequence.\n";
    
    Test.generateValues();


    printf("\nEnd of line...\n");
    
    return 0;
}