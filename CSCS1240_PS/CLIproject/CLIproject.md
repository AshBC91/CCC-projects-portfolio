# CLI Project (CLIP)

I intended this to be my last project of the semester. What I visualized was to have a collection of all the small utility programs we made throughout the semester into one same master **CLI/terminal program**. However, I was not able to make much progress due to time restrictions.

This program consists of the following commands/utilities/functions:
  - **Welcome message function**: Prints the welcome message once the program is executed.
  - **Convert Temperature**: Converting Celcius to Farenheit and viceversa.
  - **Help command**: Depending on what stage of the program the user is in, the help command will display a help message according to what it is expecting from the user.
  - **Random number generator**: In case the user decides not to input a number themselves, the program generates a semi-random number based on the system time. 
  - **Input selector**: The user may choose if they want to provide a number or have a random number be generated.
  - **Input checker**: Checks if the user provided a valid input or not; loops until it receives a valid input.


#### cliTesting script

I wrote this script trying to find a way to have a *"self-creating-command"* CLI. This pretty much came to light due to my lack of understanding of how functions and classes work. I wanted the program to create its own "commands" (functions) without me having to hardcode them into the program. The intention was to have a self-expanding program with the capability of interactivity that takes into consideration situations and events that are not actually considered. In other words, I expected the user to **not** do what's expected of them, and I was trying to compensate for that; this is the best way I can describe my idea. During that time, I didn't understand that functions and classes have to be **declared and defined in the code** and, also, that the best way to deal with invalid input is to guardrail the program. My experiment ultimately didn't lead to what I wanted, but knowledge was obtained from it, ultimately.
