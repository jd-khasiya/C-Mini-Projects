Problem : Write a program to generate a random number between 1 and 100 and ask user to guess it. Display Too High, Too Low, or Correct Guess untill the correct number is guessed.

A random Number Guessing Game between 1 and 100 - number can be any ranges.

Code Learning Functions : 

- time(NULL) G
    - Gives the current time in seconds (e.g. 1728345678). 
    - It changes every second.

- srand(time(NULL)) 
    - "Hey random machine, start from this number." 
    - It's like turning a dial to a specific position. 
    - Every time you run the program, the dial lands on a different spot (because the time is different), so you get a different sequence.

- rand() 
    - "Give me the next random number." 
    - It returns a big integer between 0 and RAND_MAX (often 32767 or 2147483647).