#include <stdio.h>

//maybe I dont need this
//#include <stdlib.h>
//#include <ctype.h>
//#include <string.h>
//#include <stdbool.h>

int strLength ( char *STR );
int numCharInStr ( char *STR );
int isNumberChar ( char CHAR );
int numsInStr ( char *STR );

int main( void ) {
    char *toParse = "sd$+nnkk+21;/35&.d08+770hf4.3..324342.352.&&192.168.0.255.2njnt5.gmh-66,12557fs 8fd5 42-f0";
    char *parseIter = toParse;

    printf ("\nTo parse: \"%s\"\n\n", toParse );

    int totalChars = strLength ( parseIter );
    int totalNumChars = numCharInStr ( parseIter );
    int totalNumbers = numsInStr ( parseIter );

    
    printf ("\n\n");
    //printf ("Iter: \n%s\n", parseIter );
    printf ("This string contains %d characters.\n", totalChars );
    printf ("This string contains %d numberic characters.\n", totalNumChars );
    printf ("This string contains %d \"numbers\".\n", totalNumbers );
    printf ("\n");

return 0;
}

//Returns the total amount of characters in a string, not including null terminator.
int strLength ( char *STR ) {
    int counter = 0;

    while ( *STR ) {
        counter++;
        *STR++;
    }
    return counter;
}

//Returns true if the character is a numeric character, otherwise it will return false.
int isNumberChar ( char CHAR ) {
    if ( CHAR >= '0' && CHAR <= '9' ) return 1;
    else return 0;
}

//Returns total amount of numeric characters in a string.
int numCharInStr ( char *STR ) {
    int numCounter = 0;

    while ( *STR ) {
        if ( isNumberChar( *STR ) == 1 ) numCounter++;      
        *STR++;
    }
    return numCounter;
}

//Returns total amount of "Numbers" in a string.
int numsInStr ( char *STR ) {
    int numCounter = 0;
    int index = 0;
    char *strIter = STR;
    int isNumber;
    int isValid;
    int signChk = 0;
    int isDecimal = 0;
    int decimalChk = 0;
    char nextChar;

    while ( *strIter ) {
        isNumber = isNumberChar( *strIter );

        //printf ( "\n\nCurrent Char: %c", *strIter );
        
        if ( *strIter == '-' || *strIter == '+' ) {
            nextChar = *(strIter+1);
            
            //printf ( "\nNext Char: %c", nextChar );

            isValid = isNumberChar( nextChar );

            //printf ( "\nIs Valid: %d", isValid );

            if ( isValid == 1 ) signChk = 1;
            else signChk = 0;
            isValid = 0;
            //printf ( "\nSign Check: %d", signChk );
        }
              
        if ( isNumber == 1 || signChk == 1 ) {
            //printf ( "\nGenerating valid number:" );
            numCounter++;
            printf ( "\nNumber %2d: ", numCounter );
            decimalChk = 0;
            
            if ( signChk == 1 ) {
                printf ( "%c", *strIter );
                *strIter++;
                signChk = 0;
            }

            //isNumber = isNumberChar ( *strIter );
            

            do {
                
                printf ( "%c", *strIter );
                *strIter++;

                if ( *strIter == '.' ) {
                    //printf ( "\nCurrent Char: %c", *strIter );
                    nextChar = *(strIter+1);
                
                    //printf ( "\nNext Char: %c", nextChar );

                    isValid = isNumberChar( nextChar );

                    //printf ( "\nIs Valid: %d", isValid );

                    if ( isValid == 1 && decimalChk < 1 ) {
                        isNumber = 1;
                        decimalChk++;
                        isDecimal = 1;
                    }
                    else {
                        isNumber = 0;
                        isDecimal = 0;
                    }

                    //printf ( "\nIs number tricked: %d", isNumber );
                    isValid = 0;
                }
                
                isNumber = isNumberChar ( *strIter );
                
            } while ( isNumber == 1 || isDecimal == 1 );

            //printf ( "\nDone. Next number...\n" );
        }
        else *strIter++;
        //system("pause");
    }
    return numCounter;
}