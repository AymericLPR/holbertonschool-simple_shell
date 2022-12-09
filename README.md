**The Simple shell:**				file:///home/myriam/T%C3%A9l%C3%A9chargements/penguin-gd7a909750_640.png"



It is a simple UNIX command interpreter written as part of the low-level programming.
It reads commands from either a file or standard input and executes them.


**Installation:**


This program is written in C and compiled on UBUNTU with GCC.

It is compiled with: 
$ gcc -Wall -Werror -Wextra -pedantic *.c -o shell

***
Instructions:**


Execute commands within Shell:
$ ./shell

A prompt will follow upon executing ./shell command.
The shell is ready for user input:
$


Send commands into Shell:

Pipe a command into the Shell:
Exemple:
$ echo "ls" | ./shell


**Usage:**


Most used functions in Shell:

-env
-exit
-ls
-pwd


**Some C functions utilized:**


	.exit

	.fork

	.free

	.malloc

	.perror

	.wait

	.getline


**File descriptions:**


	.README.md - Description of the simple shell program. 

	.main.h - Header file containing function prototypes, struct definitions, macros and standard libraries.

	.main.c - Opens up the simple shell.

	.strfunctions.c - Container for various string functions, such as: _strlen, _strdup, str_concat, etc.



**Authors:**


Myriam BELKHIRI
Aymeric
