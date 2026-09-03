# CSC222 Notes and Class
The following repo is for my CSC222 class and all its assignments! This README.md has all of my notes from my synchronus lessons.

## Day 1: 09/01/2026
- Test heavy first quarter
- First 2 quarters for CPE exam
    - Shows up as 2nd quarter grade
- Wednesday, January 28th: Final Project Due
- CPE Exam on December 22

## Day 2: 09/03/2026
- Git
    - Distributed, revision controll system
    - Good for text files, but not binary files
- .gitignore
    - Then, put the following to remove binary and mac files:
    .DS_Store
    a.out
- Next class is a quiz (pencil and paper) which will cover chapters 0-2
### Going Through The Chapter 
- C++ is a <b>lower/mid level language</b>
<< takes a value and sends it
###### Outputting a line:
    cout << "Hello World" << endl;
    return 0;

###### Inputting a line:
    ">>" is for input
    "cin >> n" would let you put in a variable. You could plug it into something like this:
    cout << "Is your favorite number" << n << "?" << endl;

###### endl
- endl is an object. It can be treated as a \n for now but it actually does more things.
- endl  is a better practice because it flushs the input
- \n can give you weird results

### Values - a fundemental thing that a program manipulates
- It's a type of data (interpretation of bit patterns)
- Two very basic values: integers and strings
- The char datatype
    - String datatype and char datatype
        - <mark>String uses double quotes, char uses single quotes</mark>
        - C strings ar chars that end with a 0
        - Modern C++ strings are objects
    - C++ can print ASCII values (which is why if you do 33*2, you get B)
- int alice;
    - What happens when you define an int on something that isn't an int?
        - GARBAGE!!!
        - It is uninitialized and a pointer to a memory location
- Hardest thing in this course is POINTERS!
    - A data type that stores an address

### Increment and Decrement Operators
- Incriment
    - "cout << n++ << '';
        - First evaluates, then (++C not C++)
- Decrement
    - "cout << ++n << endl;