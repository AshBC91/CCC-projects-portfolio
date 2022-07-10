#include <iostream>
#include <cstdio>

using namespace std;

class FFseq {
    public:
    
    void generateValues ( int start ) {
        int sequences[20];
        sequences[10] = start;

        //Fibonacci sequence simulator
        for ( int n = 0; n < 10; n++) {
            if ( n == 0 ) sequences[n] = start;
            else if ( n == 1 ) sequences[n] = sequences[n-1] + 1;
            else sequences[n] = sequences[n-1] + sequences[n-2];
            if ( n < 9 ) cout << sequences[n] << ", ";
            else cout << sequences[n] << endl;
        }

        //for ( int )

    }

    void display ( int start ) {

        int sequences[20];
        
        
    }
    

};

int main() {

    FFseq Test;
    int start;
    cout << "\nThis program prints a two column table. One column will contain a sequence with a structure similar to the Fibonacci sequence and the other a column a Factorial Sequence.\n";
    cout << "\nGive me a number and I will use it as the initiating value.";
    do {
    do {
        if (!cin) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout << "\nPlease enter a number: "; cin >> start;
    }
    while (!cin);
    }
    while ( start < 0 /*|| start > 9 */);
    
    Test.generateValues(start);
    Test.display(start);

    return 0;
}