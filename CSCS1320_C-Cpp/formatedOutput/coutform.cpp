#include <iostream>
#include "LCG_def.cpp"

class ASCII {
    public:
    LCG randomval;    

    void display ( int list ) {
        std::string linea (31,'-');
        std::cout << "\n  ASCII | Dec\t| Octal\t| Hex\t\n"; 
        std::cout << linea << std::endl; 
        //std::cout << " A\t| 01\t| 08 \t| FF\t\n";
        for ( int n = 0; n != list; n++) {
            int letter = randomval.next( 0, 127 );
            std::cout << "     " << (char)letter << "\t| " << std::dec << letter << "\t| " << std::oct << letter << " \t| " << std::hex << letter << "\t\n";
        }
        std::cout << '\n';
    }
};

int main ( ) {
    ASCII Test;
    int list;
    
    std::cout << "\n How many items do you want there to be displayed on the list?: ";
    std::cin >> list;
    
    Test.display(list);
    return 0;
}