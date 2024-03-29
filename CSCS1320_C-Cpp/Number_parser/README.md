

The parser will take strings either by user input or file input, analyzing from start of line to end of line, or start of file to end of file, or potentially the start of string to end of string, looking for base 10 numbers.

Is there a limit to how many characters there will be in a line?
There is no actual quantity, the indication for "a limit" is the newline character.

Is there a limit to how many characters there will be in a string?
This is pending to be determined. 
If there is no new line character the parser keeps checking each character until reaching the end of string (null terminator).

Only real numbers will be parsed.
Numbers can be float or int.
Numbers can be negative signed or positive signed. Unsigned negatives will be processed as positive, unsigned positive will still be positive.
{
    "123"
    "-123"
    "123.4"
    "-123.4"
    "123.456.789"
    Cannot have double decimal points
}

A number can have one or more digits.
Is there a limit on how large the numbers will be? Or can they be indefinitely large?
{
    "1"
    "23"
    "456"
    "7............99999......infinity" ???
}

Structure of a number:

    The start of a number can be identified with a negative or positive unary operator or just a number by itself.
    {
        "-1"
        "+1"
        "1"
        "-12345"
        "+12345"
        "12345"
    }

    The inbetween of a number will only be numbers or one 0 or 1 decimal point. A number cannot have two or more decimal points.
    If a second decimal point is found it will be considered as a character instead of a decimal point.
    If a decimal point is found, but no number is found after it, the point will be considered a character.
    {
        "-12345"
        "123.456"
        "abc123.def"
    }


    A number will end once a non numeric character is found.
    {
        "1 2 3" three numbers
        "123a456b" two numbers
        ">12_45\67 89" four numbers
    }

The structure of a number is repeated for the length of the string.

Examples:

    "1.2.3.4" 
        This will be parsed as two seperate numbers: "1.2" and "3.4"
    
    "12-3a45b6.7+8 9"
        This will be parsed as six seperate numbers: "12" "-3", "45", "6.7", "+8", and "9"

    "12.3.4.5..6..7.888899999."
        This will be parsed as four numbers: "12.3", "4.5", "6", and "7.888899999"

    "sd$nnkk+21;/35&.d08+770hf4.3..324342.352.&&192.168.0.255.2njnt5.gmh-66,12557fs 8fd5 42f0"
        This will be parsed the follwing way:
        "+21", "35", "08", "+770", "4.3", "324342.352", "192.168", "0.255", "2", "5", "-66", "12557", "8", "5", "42", and "0"

The program will create a file and every number parsed will be printed on their own line with a string format.
