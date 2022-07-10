#include <iostream>
#include <cstdio>

using namespace std;

class FFseq {
    public:
    
    void generateValues () {
        int sequences[19];

        //Fibonacci sequence
        for ( int n = 0; n < 10; n++) {
            if ( n == 0 ) sequences[n] = n;
            else if ( n == 1 ) sequences[n] = sequences[n-1] + n;
            else sequences[n] = sequences[n-1] + sequences[n-2];
            //if ( n < 9 ) cout << sequences[n] << ", ";
            //else cout << sequences[n] << endl;
        }

        //Factorial sequence
        for ( int i = 19; i >= 10; i-- ) {
            //cout << "\n\ni: " << i;
            for ( int m = 0; m < i-9; m++ ) {
                if ( m == 0 ) sequences[i] = i-9;
                else sequences[i]=sequences[i]*m;
                //cout << "\nm: " << m;
                //printf("\nsequences[%d]: %d",i,sequences[i]);
            }
            //if ( i > 10 ) cout << sequences[i] << ", ";
            //else cout << sequences[i] << endl;
        }

        int width = sizeof ( sequences[19] ) * 3 + 9;
        //cout << "\nWidth: " << width << endl;
        string border (width, '=');
        string line (width, '-');
        cout << endl << ' ' << border << ' ' << endl;
        printf( " |   fib   |   fac   | \n");
        cout << ' ' << line << ' ' << endl;
                for ( int n = 0; n < 10; n++)
            printf( " | %7d | %7d | \n", sequences[n], sequences[19-n]);
        cout << ' ' << border << ' ' << endl;
        
    }
    

};

int main() {

    FFseq Test;
    
    cout << "\nThis program prints table with two columns up to 10 rows, one column contains a Fibonacci Sequence and the other a Factorial Sequence.\n";
    
    Test.generateValues();

    return 0;
}