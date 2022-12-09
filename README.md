**The Simple shell:**         "https://www.google.com/imgres?imgurl=https%3A%2F%2Fi.ytimg.com%2Fvi%2FCyG16N3GJWo%2Fmaxresdefault.jpg&imgrefurl=https%3A%2F%2Fkorben.info%2Finstaller-shell-bash-linux-windows-10.html&tbnid=VTbLxGI90sYvCM&vet=10CEIQMyiFAWoXChMIgI28hp3s-wIVAAAAAB0AAAAAEAI..i&docid=Y3UKCgXZ8BSdsM&w=1280&h=720&q=image%20du%20shell%20linux%20dans%20C&ved=0CEIQMyiFAWoXChMIgI28hp3s-wIVAAAAAB0AAAAAEAI"




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
