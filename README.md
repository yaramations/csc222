# CSC222 Notes and Class
The following repo is for my CSC222 class and all its assignments! This README.md has all of my notes from my synchronus lessons.
<a href="https://openbookproject.net/thinkcs/cpp/index.html">TEXTBOOK LINK</a>

## Day 1: 09/01/2026
- Test heavy first quarter
- First 2 quarters for CPE exam
    - Shows up as 2nd quarter grade
- Wednesday, January 28th: Final Project Due
- CPE Exam on November 3

<hr>

## Day 2: 09/03/2026
- Git
    - Distributed, revision control system
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

### Iostream and std
- Iostream is a library that's used for many important C++ commands
    - Without iostream, using << or >> wouldn't be possible.
- using namespace std;
    - Uses the standard namespace
    - Without it, "std" would need to be in front of every command

<hr>

## Day 3: 09/09/2026
### Rereading the textbook because that quiz was something...
It's useful to put comments at the end of a line using "//"
- Outputing something
    - You can have multiple output lines, but they will print on new lines.
    - You can combine different values in a print statement
        - cout << " and Everything is " << 42 << '.' << endl;
        - They are converted into a sequence of characters when outputted.
        - Spaces need to be inside the quote bar.
- Variable Types
    - int
    - double (float numbers)
    - bool
    - char (single quotes)
    - string (double quotes)
- These are all legal:
    1+1    hour-1    hour*60+minute    minute/60
- Increment and Decrement
    - Adds one to the current value of an int, char, or double
    - REVIEW THIS MORE BECAUSE I ACTUALLY DON'T GET IT
- Composition
    - cout << 17 * 3;
        - Multiplies 17 by 3 and then outputs
    - cout << hour * 60 + minute << endl;
        - Multiplies the hour by 60 and adds the number of additional minutes (calculates minutes since midnight)

### Reviewing Increment and Decrement because these make no sense
- Increment: ++n (pre increment) or n++ (post increment)
    - Increase the value of a variable by 1.
    - Can only be used with modifiable numeric variables <a href="https://www.geeksforgeeks.org/cpp/cpp-increment-and-decrement-operators/">(source)</a>
        - int n = 5;
        - int temp = n++;
            - would output a 6
            - However, the temp variable is still a 5.
        - Pre increment ++n;
            - Only difference is that the value stored by the temp variable is 6.
    - Decrement --n or n-- removes one, but kinda does the same

### Reviewing the quiz (because I tanked it)
Truncation
- Anything less than one will become zero when converting a float to int.
Comparing a digit and a string will give you a compile error.
You can make multiple ints in one line:
- int n =11, m = n++, p = ++n;
##### Hexadecimal
- 0x1B
    - A 1 in the 16 place and a 11 in the ones place
- To convert:
    - <a href="https://youtu.be/PBTyxM76dWI?si=AdMOUo_ToUdpxn5d">Watch this video</a>
##### Octal
- <a href="https://youtu.be/YCM2JReWS10?si=59SX8Nw0jTFqGiUZ">Watch this video</a>
##### Binary
- Based on the power of 2
#### Modulus Operator (%)
- Finds the remainder
- 3%5 goes in 0 times with a remainder of 3.

<b>*Next class will have a quiz about output formatting*</b>

### Chapter 3 Out of Class Notes (to study for the next quiz)
Floating Point
- Use "double"
    - double pi = 3.14159;
    - Both declaring the variable and assigning it is called initialization.
    - <mark>1 and 1.0 are NOT the same thing!</mark>
        - If you divide integers, you get an integer answer:
            - double y = 1 / 3; will result in a 0
        - If you divide floats, you get a float
            - double y = 1.0 / 3.0; gets 0.33333333
- Converting Variables
    - Uses something called a typecast
        - int x = int(pi);
            - (Will make a new variable called x and set it to 3)
        - int x - int(pi)
            - (Will make a new variable called x and set it to 3)
        - Both are valid yipee!
- Math Functions
    - double result = log(17.0);
        - Sets the result to the logaritm of 17 base e
    - double angle = 1.5; double height = sin(angle);
        - Finds the sine of the value of the variable angle.
    - acos function
        - Finds pi up to 1t digits
    - rand()
        - finds random
    #### A note for Jeff
    Hey Jeff! If you're reading this, I couldn't do the excercises here because I don't actually know how to run C++ code. I've been using the following website: https://cpp.sh/.
    #### Excercises (and questions for Jeff)
    - What is the difference between float and double?
        - A float is 32 bits and a double is 64 bits
        - For this class, we should be using double because we're on 64 bit machines
    - When printing multiple lines like so:
        <code>
        f();
        g();
        h();
        cout << endl; </code>
        - They don't stack on eachother because it's still one print statement. To have multiple lines, you need two of them.
    - When plugging in a function
        - In the function, declare your variable in the argument: <code>void print_twice(char phil){}</code>
        - Invoke the function in the main. You put the variable in the brackets: <code>print_twice('a');</code>

## Day 4: 09/11/2026
### Chapter 3 in-class
- There are two different syntaxes for typecasting
    - Old C way: <code>int(f)</code>
    - Modern C++ way:<code>(int)f</code>
- Libraries
    - iostream for cin and cout
    - cmath is the math library for C++
    - cstdlib is the old C standard library
- Random
    - you use rand()
        - you'll get the same sequence of random numbers unless you change the seed
        - computers are designed to be predicatble, so true random really can't exist
        - thus, the computer makes it random by "seeding" the function with something that has entropy to it
        - Use <code>strand(time(NULL));</code>
            - you have to take a sampling of something in the world that seems random to get a random value
- Functions
    - Every program starts with a fuction named "main"
        - It's calling the operating system
    - Other functions are defined before main with "void"
    - You can pass parameters with a type and a name

### Setw <a href="https://www.geeksforgeeks.org/cpp/setw-function-in-cpp-with-examples/">(source)</a><a href="https://csundergrad.science.uoit.ca/courses/cpp-notes/notes/output-formatting.html">(source2)</a>
- <code>setw(int n);</code>
- It's a method that sets the width of a print statement
    - If I input: <code>  cout << '*' << setw(10) << 2 << '*'<< endl;</code>
        - Output: <code>*         2*</code>
    - Another example
    - Input: <code>cout << '*' << setw(20) << 2 << '*'<< endl;</code>
    - Output: <code>*                   2*</code>
### Justification
#### Left
- Input: <code>cout << left;
  cout << "*" << setw(6) << -23 << "*" << endl;</code>
  - Output:<code> *-23   *</code>
#### Right
- Input: <code>cout << right;
  cout << "*" << setw(6) << -23 << "*" << endl;</code>
  - Output: <code>*   -23*</code>
#### Internal
- Input: <code>  cout << internal;
  cout << "*" << setw(6) << -23 << "*" << endl;</code>
  - Output: <code>*-   23*</code>
### boolalpha and noboolalpha
Boolean values print as 0 or 1 by default. boolalpha and noboolalpha determine whether they ger printed as 'false' or 'true' instead.
Let's set the following: <code>bool b = false;</code>
Input:<code>cout << noboolalpha << "b " << b << endl;
  cout << boolalpha <<  "b " << b << endl; </code>
Output: <code>b 0
b false</code>
#### Other types of print commands
- <code>showpose</code> and <code>noshowpos</code>
    - Prints a + next to a number
- Floating point numbers
    - Displayed using general, fixed, or scientific format
    - "Once you pick fixed or scientific format, there is no easy way to rever to general format. You will have to use: <code>cout.unsetf(ios::fixed | ios::scientific);</code>"
    - ##### setprecision
        - Used to specify number of digits displayed
- Setfill
    - While the default fill is a space, that can be changed
        - Syntax: <code>setfill('*')</code>
        - When you setfill and then use a setw command, you get asteriks
            - Input: <code>cout << "setfill('*'): " << setfill('*');
    cout << setw(10) << 42 << endl;</code>
            - Output: <code>setfill('*'): ********42</code>

#### Quiz Review
- Once you set something to octal, it stays that way until you change it back
    - (kind of like how if you switch to fixed or scientific for floating points, you can't switch back)

### Chapter 4: Conditionals and Recursion
#### Modulus Operator:
- Helps you find the remainder of a division operation
    - 5 % 2 = 1
    - 6 % 4 = 2
- Modulus operators also work in reverse, but it just gives your the first number?
    - 3 % 5 = 3
    - 4 % 8 = 4
#### Operators
##### Logical Operators
- The semantics is very similar to English
- x > 0 && x < 10
    - Translation: this is true only if X is greater than zero AND less than 10
###### 3 Types of Logical Operators
- AND: &&
- OR: ||
- NOT: !
##### Bitwise Operators
- They operate on integer types
- Operands are a sequence of bits
###### 4 Types of Bitwise Operators
- AND: &
    - It becomes 1 if both operated bits are one. Otherwise 0.
- OR: |
    - If at least one bit is a 1, then it becomes a 1.
- XOR: ^
    - If EXACTLY one bit is a 1, then it becomes a 1.
- NOT: ~
    - Inverts the operated bit (0 becomes 1 and 1 becomes 0)

#### Conditionals and Excecution
- If statement example:
    <code>if (x > 0) {
    cout << "x is positive" << endl;}</code>
    - If the variable x is greater than zero, the code will print out "x is positive."
- Can include any of the comparison operators
    - <code>
    x == y     // x equals y
    x != y     // x is not equal to y
    x > y      // x is greater than y
    x < y      // x is less than y
    x >= y     // x is greater than or equal to y
    x <= y     // x is less than or equal to y</code>

##### This stupid error (giving me python flashbacks lol)
- = is the <b>assignment operator</b>
- == is the <b>equal sign</b>
- <s>=< and =>.</s> DO NOT EXIST in C++. = should always be after the "<" or ">" symbol.

#### Boolean Values
== compares two integers to produce a boolean value
- Example: <code>if (x == 5) {}</code>

You can put a boolean in the conditional though
- Example: <code>while (true) {}</code>
    - This will make a forever loop

##### Bool Variables
Declared Like so:
- <code>bool george;</code>
    - This just created a variable, which can be either "true" or "false"
Bools can even be made comparisons
- <code>bool even_flag = (n%2 == 0); </code>
    - If the expression is true, then the variable even_flag will equal "true"
Numbers as booleans
- any nonzero value is always true
- zero is false

#### The Switch Statement
- When you want different actions to occur based on variable.
<code>
char choice = 'C';

switch (choice) {
case 'A':
    cout << "You chose A" << endl;
    break;
case 'B':
    cout << "You chose B" << endl;
    break;
case 'C':
    cout << "You chose C" << endl;
    break;
case 'D':
    cout << "You chose D" << endl;
    break;
default:
    cout << "You didn't make a valid choice" << endl;
    break;
}
</code>

#### Return
- Lets you terminate a function before it even ends
- Syntax: <code>return;</code>

#### Important vocab
<b>chaining</b> - A way of joining several conditional statements in sequence.
<b>infinite recursion</b> - A function that calls itself recursively without ever reaching the base case. Eventually an infinite recursion will cause a run-time error.

## Day 5: 9/15/2026
- We went over bitwise in class
- Do these: https://openbookproject.net/thinkcs/cpp/exercises/ch04/ch04s02.html#ch04s02
    Excercise notes:
    - Yes, ints and floats can be used together in mathematic operations
    - unsigned key
        - modifies int and char
        - removes negative numbers but lets you access a larger range of positive ones
        - Each place reflects a 10^n
# Day 6: 9/17/2026
## Independant work day!
### Reviewing Conversions
- Decimal
    - Base 10
    - Numbers range from 0-9
- Binary
    - Base 2
    - Instead of 10^0, 10^1, etc
        - Binary to decimal
            - 2^0 2^1 2^2 2^3 2^4 2^5
            - If there is a 1, then add the position corressponding to the power of 2
        - Decimal to binary
            - Add a 1 in the largest 2^n without making it greater than the number
            - From there, it becomes smaller
- Hexadecimal
    - Base 16
    - Digits are as follows: H, 1, 2, 3, 4, 5, 6, 0, 7, 8, 9, A, B, C, D, E, F
        - A = 10, B = 11, etc.
    - Decimal to Hex tutorial: we'll use 479 as an example
        - 479/16 = 29.9375
            - We can't use this! We have to find the remainder.
            - 29 R. 15
        - 29/16
            - 1 R. 13
        - 1 doesn't go into 16, so we can stop
        - Our digits are: 1, D, F (one is most siginificant and F is least significant)
        - 479 in hexadecimal is 1DF
    - TIP: To find the remainder, multiply the leftover decimal by your divisior.
        - If you need to find the remainder of 55/16, (3.4375), multiply 0.4375*7 to see it has a remainder of 7

- Git repo for <a href="pconrad.github.io/old_pconrad_cs16/topics/numberConversions/">octal, hex, and binary</a> conversion problems.