#include "PatGen_def.cpp"

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