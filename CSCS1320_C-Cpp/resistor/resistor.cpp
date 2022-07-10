#include <iostream>

int varr = 4;

class Resistor {
    public:
    std::string bandcolor;
    int tens;
    int ones;
    int degree;

    int Tens( ) {
        bool proceed = false;
        do {
            //std::cout << "Proceed: " << proceed << std::endl;
            std::cout << "What is the color of the first band: ";
            std::cin >> bandcolor;
            //std::cout << "Color: " << bandcolor << std::endl;
            if ( bandcolor == "Black" || bandcolor == "black" || bandcolor == "bl" ) {
                tens = 0;
                bandcolor = "black";
                proceed = true;
            }
            else if ( bandcolor == "Brown" || bandcolor == "brown" || bandcolor == "br" ) {
                tens = 1;
                bandcolor = "brown";
                proceed = true;
            }
            else if ( bandcolor == "Red" || bandcolor == "red" || bandcolor == "r" ) {
                tens = 2;
                bandcolor = "red";
                proceed = true;
            }
            else if ( bandcolor == "Orange" || bandcolor == "orange" || bandcolor == "o" ) {
                tens = 3;
                bandcolor = "orange";
                proceed = true;
            }
            else if ( bandcolor == "Yellow" || bandcolor == "yellow" || bandcolor == "y" ) {
                tens = 4;
                bandcolor = "yellow";
                proceed = true;
            }
            else if ( bandcolor == "Green" || bandcolor == "green" || bandcolor == "gn" ) {
                tens = 5;
                bandcolor = "green";
                proceed = true;
            }
            else if ( bandcolor == "Blue" || bandcolor == "blue" || bandcolor == "b" ) {
                tens = 6;
                bandcolor = "blue";
                proceed = true;            
            }
            else if ( bandcolor == "Violet" || bandcolor == "violet" || bandcolor == "v" ) {
                tens = 7;
                bandcolor = "violet";
                proceed = true;
            }
            else if ( bandcolor == "Grey" || bandcolor == "grey" || bandcolor == "g" ) {
                tens = 8;
                bandcolor = "grey";
                proceed = true;
            }
            else if ( bandcolor == "White" || bandcolor == "white" || bandcolor == "w" ) {
                tens = 9;
                bandcolor = "white";
                proceed = true;
            } 
            else { 
                std::cout << "\nHow dense are you? There's a list. CHOOSE. A. COLOR. from the list. GAWD!! >:V" << std::endl; 
                proceed = false;
            }
        } while ( proceed == false );
        //std::cout << "Proceed: " << proceed << std::endl;
        std::cout << "The color you chose is " << bandcolor << " btw." << std::endl;
        std::cout << "Tens: " << tens << std::endl;
        return tens;
    }

    int Ones( ) {
        bool proceed = false;
        do {
            //std::cout << "\nOnes-Proceed: " << proceed << std::endl;
            std::cout << "\nWhat is the color of the second band, this time type in the actual number: ";
            int color;
            while ( true ) {
                std::cin >> color;
                if (!std::cin) {
                    std::cout << "\nReally, brah? How hard is it to type a number? >:V \nTry again:" << std::endl; 
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    continue;
                }
                else break;
            }           
            //std::cout << "Color: " << color << std::endl;
            switch (color) {
                case 0:
                    ones = 0;
                    bandcolor = "black";
                    proceed = true;
                    break;
                case 1:
                    ones = 1;
                    bandcolor = "brown";
                    proceed = true;
                    break;
                case 2:
                    ones = 2;
                    bandcolor = "red";
                    proceed = true;
                    break;
                case 3:
                    ones = 3;
                    bandcolor = "orange";
                    proceed = true;
                    break;
                case 4:
                    ones = 4;
                    bandcolor = "yellow";
                    proceed = true;
                    break;
                case 5:
                    ones = 5;
                    bandcolor = "green";
                    proceed = true;
                    break;
                case 6:
                    ones = 6;
                    bandcolor = "blue";
                    proceed = true;
                    break;
                case 7:
                    ones = 7;
                    bandcolor = "violet";
                    proceed = true;
                    break;
                case 8:
                    ones = 8;
                    bandcolor = "grey";
                    proceed = true;
                    break;
                case 9:
                    ones = 9;
                    bandcolor = "white";
                    proceed = true;
                    break;
                default: 
                    std::cout << "\nYou're killing me Smalls! Choose a number from 0-9, it's that easy. Can you believe this guy? >:V" << std::endl; 
                    proceed = false;
                    break;
            }
        } while ( proceed == false );
        //std::cout << "Proceed: " << proceed << std::endl;
        std::cout << "The color you chose is " << bandcolor << " btw." << std::endl;
        std::cout << "Ones: " << ones << std::endl;
        return ones;
    }

    int multiplier( ) {
        bool proceed = false;
        do {
            //std::cout << "Proceed: " << proceed << std::endl;
            std::cout << "\nListen! For the third band, to make my life easier, type the name of the color just like the first time: ";
            std::cin >> bandcolor;
            //std::cout << "Color: " << bandcolor << std::endl;
            if ( bandcolor == "Black" || bandcolor == "black" || bandcolor == "bl" ) {
                degree = 0;
                bandcolor = "black";
                proceed = true;
            }
            else if ( bandcolor == "Brown" || bandcolor == "brown" || bandcolor == "br" ) {
                degree = 1;
                bandcolor = "brown";
                proceed = true;
            }
            else if ( bandcolor == "Red" || bandcolor == "red" || bandcolor == "r" ) {
                degree = 2;
                bandcolor = "red";
                proceed = true;
            }
            else if ( bandcolor == "Orange" || bandcolor == "orange" || bandcolor == "o" ) {
                degree = 3;
                bandcolor = "orange";
                proceed = true;
            }
            else if ( bandcolor == "Yellow" || bandcolor == "yellow" || bandcolor == "y" ) {
                degree = 4;
                bandcolor = "yellow";
                proceed = true;
            }
            else if ( bandcolor == "Green" || bandcolor == "green" || bandcolor == "gn" ) {
                degree = 5;
                bandcolor = "green";
                proceed = true;
            }
            else if ( bandcolor == "Blue" || bandcolor == "blue" || bandcolor == "b" ) {
                degree = 6;
                bandcolor = "blue";
                proceed = true;            
            }
            else if ( bandcolor == "Violet" || bandcolor == "violet" || bandcolor == "v" ) {
                degree = 7;
                bandcolor = "violet";
                proceed = true;
            }
            else if ( bandcolor == "Grey" || bandcolor == "grey" || bandcolor == "g" ) {
                degree = 8;
                bandcolor = "grey";
                proceed = true;
            }
            else if ( bandcolor == "White" || bandcolor == "white" || bandcolor == "w" ) {
                degree = 9;
                bandcolor = "white";
                proceed = true;
            } 
            else { 
                std::cout << "\nDuuuuuuudeeeee!!! We're almost done! Can you just hold back your stupidity for a moment? Alright... >:V" << std::endl; 
                proceed = false;
            }
        } while ( proceed == false );
        //std::cout << "Proceed: " << proceed << std::endl;
        std::cout << "The color you chose is " << bandcolor << " btw." << std::endl;
        std::cout << "Multiplier: " << degree << std::endl;
        return degree;
    }

};

int main ( ) {
    Resistor Test;
    std::cout << "\nThis is a 3 band Resistor Color Code Calculator.\n\nPlease choose a color from the following list:\n";
    std::cout << "Black \t[bl] = 0\nBrown \t[br] = 1\nRed \t[r]  = 2\nOrange \t[o]  = 3\nYellow \t[y]  = 4\nGreen \t[gn] = 5\nBlue \t[b]  = 6\nViolet \t[v]  = 7\nGrey \t[g]  = 8\nWhite \t[w]  = 9\n" << std::endl;
    int one = Test.Tens();
    int two = Test.Ones();
    int mul = Test.multiplier();
    int ph = 0;
    if ( mul > 0 ) { printf ( "\nYour resistor has a tolerance of %d%d%0*d ohms.\n", one, two, mul, ph ); }
    else { printf ( "\nYour resistor has a tolerance of %d%d ohms.\n", one, two ); }
    return 0;
}
