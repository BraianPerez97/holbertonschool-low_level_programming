In C language Prerpcessor is a program that processes the source code before it's compiled. Preforms text manipulation on the source code and genereates modified sprce code that's then compiled. The preprocessor is invoked using preprocessor directives, which are special commands that begin with the # character.
Some of the commonly used preprocessor directives in C include:

#include: This directive is used to include the contents of a header file in the source code. Header files contain function prototypes and definitions that are needed by the source code.

#define: This directive is used to define a macro, which is a symbolic name that represents a piece of code. When the macro is used in the source code, the preprocessor replaces it with the code it represents.

#ifdef, #ifndef, and #endif: These directives are used for conditional compilation. They allow you to include or exclude code from the compilation process based on certain conditions.

#pragma: This directive is used to provide additional information to the compiler. Pragmas are typically used to control the behavior of the compiler or to provide hints for optimization.

The preprocessor is an important part of the C language, as it allows you to write more modular and reusable code. By using header files and macros, you can separate the interface and implementation of your code, which makes it easier to maintain and modify. 

_______________________________________________________________

Macros: Way to define a symbolic name or a short piece of code that can be used ro represent a longer piece of code. Macros are defined using #define directive in C. 

Object like Macros: are used to define a symbolic name for a constant value or a short., simple code snippet. (They behave like variables or constants and cannot be changed once they are defined. When an object-like macro is used in the code, the preprocessor simple replaces it with its corresponding value.

Function-like Macros: Are used to define a block of code that can be reused miltiple times in the program. They behave like functions and can take arguments.
