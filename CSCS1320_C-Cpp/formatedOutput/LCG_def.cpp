#include "LCG_decl.hpp"


void LCG::eval( ) {
    this->value = ( multiplier * this->value + increment ) % modulus;
}

LCG::LCG( ) {
    this->value = duration_cast<nanoseconds>(system_clock::now().time_since_epoch()).count() % (int)std::pow(2,16);
}

LCG::LCG( int seed ) {
    this->value = seed;
}

int LCG::next( ) {
    eval( );
    return this->value % 100000;
}

int LCG::next( int min, int max ) {
    eval( );
    int scaled = value % (max - min + 1) + min;
    return scaled;
}

//compile first -c /EHsc