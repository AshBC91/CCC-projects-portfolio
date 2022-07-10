#include <iostream>

class PatGen {
    public:
    void primeNums( ) {
        int min = 0;
        int max = 60;
        std::cout << "Searching for prime numbers between the range " << min << " - " << max << "...\n";

        while ( min < max ) {
            int mod = min;
            int zeroCount = 0;
            //std::cout << "\nmin: " << min << std::endl;
            
            while ( mod >= 1 ) {
                //std::cout << "mod: " << min << " % " << mod << " = " << min % mod << std::endl;
                if ( min % mod == 0 ) zeroCount++;
                //std::cout << "zero count: " << zeroCount << std::endl;
                mod--;
            }
            //std::cout << "FINAL zero count: " << zeroCount << std::endl;
            if ( zeroCount == 2 ) std::cout << min << std::endl;
            min++;
        }
    }

    void evenNums( ) {
        int min = 48;
        int max = min + 12;
        //std::cout << "This is the even method.\n";
        for ( min; min < max; min++ ) {
            if ( min % 2 == 0 ) std::cout << min << std::endl;
        }
    }

    void oddNums( ) {
        int min = 13;
        int max = 22;
        //std::cout << "This is the ODD method.\n";
        for ( min; min < max; min++ ) {
            if ( min % 2 == 1 ) std::cout << min << std::endl;
        }
    }
};

int main( ) {
    PatGen Test;
    std::cout << "Even numbers: " << std::endl;
    Test.evenNums( );
    std::cout << '\n';
    std::cout << "Odd numbers: " << std::endl;
    Test.oddNums( );
    std::cout << '\n';
    std::cout << "Prime numbers: " << std::endl;
    Test.primeNums( );    

return 0;
}