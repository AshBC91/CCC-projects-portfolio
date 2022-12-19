# PatGen

For this project, we were taught different practices for storing files containing code. We were shown the difference between organizing libraries in multiple files vs one file. For example, having all the code written in one `.c` file, againts having a header file `.h` and a source file `.c`.

This code is a C++ program that defines a class called "PatGen" with three member functions: "primeNums", "evenNums", and "oddNums".

* The **"primeNums"** function searches for prime numbers within a given range (between 0 and 60 in this case) and prints them to the screen. It does this by checking if the number has any divisors other than 1 and itself.

* The **"evenNums"** function prints all even numbers between a given range (between 48 and 60 in this case) to the screen. It does this by using a loop to check if each number in the range is even, and printing it if it is.

* The **"oddNums"** function prints all odd numbers between a given range (between 13 and 22 in this case) to the screen. It does this by using a loop to check if each number in the range is odd, and printing it if it is.

The main function creates an instance of the "PatGen" class and calls the three member functions in sequence, printing the even numbers, odd numbers, and prime numbers found. The program then terminates.
