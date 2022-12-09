--------------------------------------------------**#The Simple Shell:**--------------------------------------------------------			
                                                                                          


   ![Drag Racing](https://i.goopics.net/ta2xso.png)



It is a simple `UNIX` command interpreter written as part of the low-level programming.
It reads commands from either a file or standard input and executes them.


------------------------------------------------**#Installation:**-------------------------------


This program is written in `C` and compiled on `UBUNTU` with `GCC`.

It is compiled with: 
`$ gcc -Wall -Werror -Wextra -pedantic *.c -o shell`


------------------------------------------------ **#Instructions:**-----------------------------------


	Execute commands within Shell:
`$ ./shell`

A prompt will follow upon executing ./shell command.
	The shell is ready for user input:
`$`


	Send commands into Shell:

	Pipe a command into the Shell:
Exemple:
`$ echo "ls" | ./shell`



--------------------------------------------------**#Usage:**----------------------------------------



#Most used functions in Shell:

	
	-man + cmd: Shows the manual entry for any given command.

	-mkdir: Creates a directory and accepts directory name as next parameter.
	
	-touch: Creates a file or update a file.
	
	-cat: Concatenates the file and gives output on standard output. 
	
	-ls: Display list of all files and folders in the current directory.
	
	-cd: Changes the directory.

	-pwd: Shows the present working directory.
	
	-exit: Quits the simple_shell program.



-----------------------------------------------** C functions utilized and systems calls:**-----------------------------------------


Lists of allowed functions and system calls (see the man):

	.exit

	.fork

	.strtok

	.get_cmd

	.envp

	.pid_t

	.envp

	.free

	.malloc

	.perror

	.wait

	.getline
	
	.execve



---------------------------------------------------------**#File descriptions:**-----------------------------------------


	.README.md - Description of the simple shell program. 

	.main.h - Header file containing function prototypes, struct definitions, macros and standard libraries.

	.main.c - Opens up the simple shell.

	.strfunctions.c - Container for various string functions, such as: _strlen, _strdup, str_concat, etc.

	.fork.c - Function fork.

	.get_command.c - Function for take the command.


---------------------------------------------------------**Tasks:**----------------------



	.	_Task_ 0
	.	_Task_ 1
	.	_Task_ 2 
	.	_Task_ 3
	.	_Task_ 4
	.	_Task_ 5
	.	_Task_ 6



----------------------------------------------------------**#Authors:**-------------------------------------------------



	Myriam BELKHIRI <5019@holbertonstudents.com>

	Aymeric LE PEN-RAVOUX <5622@holbertonstudents.com>



