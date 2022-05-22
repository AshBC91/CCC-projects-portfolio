# Random Number Generator Information

This script generates *semi-random numbers* using the system's time during execution. It compares the random numbers in pairs and prints a message stating if they are equal, greater than, or less than to each other. This is performed up to three times and then exits.

### Functionality:
  - Four integer variables are declared and initiated: **$coefficient**, **$constant**, and **$modulus** contain constant values. **$current** is initiated with the **sum** of the current system's *seconds* cast into an integer type, plus the current system's *milliseconds*, up to 3 figures, cast into an integer type.
  - Function lcg is declared and defined. lcg expects only one argument, the previously generated random number. The purpose of using the previous number is to reduce the chances of a number repeating frequently.
    - Function lcg contains a mathematical equation that calculates the next random number: **f(x) = ( ax + b ) % c**
    - Where:
      - **x** is the *sum of the current time* or *the previously generated random number*, represented by the variable **$current**.
        -  Variable $current gets over overwritten every time a new random number is generated.
      - **a** is the coefficient that scales up or down x, represented by the variable **$coefficient**.
      - **b** is a domain shifter, which determines the initial value of f(x) in case x = 0, represented by the variable **$constant**.
      - **c** is a range limiter, used to establish the largest value we want to obtain from the equation, represented by the variable **$modulus**.
      - **f(x)** is the remainder of the division between the result of (ax + b) and c, this is the "next random number", represented by the variable **$next**, which is then stored in variable **$current** outside of the *lcg function*.
  - A *for loop statement* is used to generate pairs of random numbers. These two random numbers are compared with an *if statement* to check if they are equal, greater than, or less than each other. Whatever condition is true, a corresponding message is printed to standard output and then the loop repeats up to three times (as long as the loop iterator is less than 4).

*We coded this program along with the professor during class. It is not a concept that I developed, but I still want to include it in my portfolio.*
