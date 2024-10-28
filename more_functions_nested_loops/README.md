C Programming Essentials
This README covers fundamental C programming concepts and tools, including loops, functions, scope, compiler flags, and header files.

Table of Contents
Nested Loops
Functions
Function Declaration vs. Definition
Function Prototype
Scope of Variables
GCC Flags
Header Files and #include
1. Nested Loops
Nested loops are loops within loops. In a nested loop, the outer loop executes once, and each time it does, the inner loop runs fully from start to end. Nested loops are useful for working with multi-dimensional data structures or performing repetitive tasks within larger tasks.

c
Copy code
#include <stdio.h>

int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("i = %d, j = %d\n", i, j);
        }
    }
    return 0;
}
2. Functions
A function is a block of code that performs a specific task. Functions help organize code, make it reusable, and improve readability. In C, functions must be declared before they’re used or defined above the main program.

c
Copy code
#include <stdio.h>

void greet() {
    printf("Hello, World!\n");
}

int main() {
    greet();
    return 0;
}
3. Function Declaration vs. Definition
Declaration: A function declaration tells the compiler about a function’s name, return type, and parameters. It does not contain the body (implementation) of the function.

c
Copy code
void greet(); // Declaration
Definition: A function definition contains the actual code that runs when the function is called. It includes the function's body.

c
Copy code
void greet() { // Definition
    printf("Hello, World!\n");
}
4. Function Prototype
A function prototype is a declaration of a function that informs the compiler of its signature (return type and parameters) without providing the function body. It is placed at the beginning of the program to allow for function calls before definitions.

c
Copy code
#include <stdio.h>

void greet(); // Prototype

int main() {
    greet();
    return 0;
}

void greet() { // Definition
    printf("Hello, World!\n");
}
5. Scope of Variables
Scope determines where a variable can be accessed in a program. C has two primary scopes:

Local Scope: Variables declared within a function are only accessible within that function.
Global Scope: Variables declared outside any function can be accessed by any function within the file.
c
Copy code
#include <stdio.h>

int globalVar = 10; // Global scope

int main() {
    int localVar = 5; // Local scope
    printf("Global: %d, Local: %d\n", globalVar, localVar);
    return 0;
}
6. GCC Flags
GCC (GNU Compiler Collection) provides various flags for compiling code with specific options:

-Wall: Enables all warnings about questionable code.
-Werror: Treats all warnings as errors, ensuring code correctness.
-pedantic: Enforces strict C standards compliance.
-Wextra: Enables additional warnings not covered by -Wall.
-std=gnu89: Sets the standard to gnu89, which is the GNU flavor of the C89 standard.
bash
Copy code
gcc -Wall -Werror -pedantic -Wextra -std=gnu89 my_program.c -o my_program
7. Header Files and #include
Header files are files that contain declarations of functions, macros, constants, and other information that multiple program files need to share. They’re included at the beginning of a C file using #include.

Creating a Header File: Create a .h file with function prototypes or constants.
Using #include: Include the header file in your program to access its declarations.
Example:

c
Copy code
// math_ops.h
#ifndef MATH_OPS_H
#define MATH_OPS_H

int add(int a, int b); // Function prototype

#endif
c
Copy code
// main.c
#include <stdio.h>
#include "math_ops.h" // Include header file

int main() {
    int result = add(5, 3);
    printf("Result: %d\n", result);
    return 0;
}
Summary
These topics form the basics of structured and modular C programming. By understanding loops, functions, variable scope, compiler flags, and header files, you’re well-equipped to write organized, efficient C programs.
