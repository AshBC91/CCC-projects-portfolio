# Formated Output

For this project, we were taught the different types of streams: stdin, stdout, and stderr.

We were taught the difference in how to output data in C vs C++, and the different ways to format the output.

The general funtionality of this program is to print to the terminal a table displaying an ASCII character, and its decimal, octal, and hexadecimal representation.

Output example:

  ASCII | Dec   | Octal | Hex
  -------------------------------
     r  | 114   | 162   | 72
     ▲  | 30    | 36    | 1e
     ~  | 126   | 176   | 7e
     )  | 41    | 51    | 29
     #  | 35    | 43    | 23
     N  | 78    | 116   | 4e
     z  | 122   | 172   | 7a
     t  | 116   | 164   | 74
     ♂  | 11    | 13    | b
     V  | 86    | 126   | 56

For the C++ program, the program uses an "LCG" (Linear Congruential Generator) and an "ASCII" classes.

The "ASCII" class has a single member function called "display", which takes an integer as an argument and displays a table of ASCII characters, their decimal, octal, and hexadecimal values. It does this by creating an instance of the "LCG" class and using it to generate a sequence of random ASCII characters within the given range.

The main function prompts the user to specify the number of items they want displayed in the table and then creates an instance of the "ASCII" class and calls its "display" function with the user-specified number of items. The program then terminates.

For the C program, it takes in two integers as input, representing a range of values. It then calls the function ASCII which prints out the ASCII character, decimal, octal, and hexadecimal representation of each integer in the range specified. The function also prints out a separator line made up of hyphens. The main function prompts the user for the minimum and maximum values for the range and then calls the ASCII function with these values as arguments.
