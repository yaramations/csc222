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
        <code>f();
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