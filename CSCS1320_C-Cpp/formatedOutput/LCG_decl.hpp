#include <chrono>
#include <cmath>
#include <iostream>

using std::chrono::duration_cast;
using std::chrono::nanoseconds;
using std::chrono::system_clock;

class LCG {
    int value;
    int modulus = (int)std::pow( 2, 16 ) + 1;
    int multiplier = 75;
    int increment = 74;
    void eval( );

    public:
        LCG( );
        LCG( int seed );
        int next( );
        int next( int min, int max );
};
