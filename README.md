Simple shell is a simple UNIX command interpreter written as part of the low-level programming.
It reads commands from either a file or standard input and executes them.
It compile all .c files in the repository and run the resulting executable:

gcc *.c -o

Exemple:


$echo "echo 'Holberton School Toulouse'" | ./shell
'Holberton School Toulouse'

$echo "echo $HOME" | ./shell
/home/currentuser

$echo "echo $PWD" | ./shell
/home/currentuser/holberton/simple_shell

$echo "echo $OLDPWD" | ./shell
/home/currentuser/holberton/printf

$echo "echo $PATH" | ./shell
/home/currentuser/sbin:/home/currentuser/bin:/home/sbin:/home/bin:/sbin:/bin:/home/games:/home/currentuser/games:/snap/bin:/snap/bin:


ENV_VARIABLE is substitued with  its value.
Example:

$echo "echo $?" | ./shell
0
$$
The second $ is substitued with the current process ID.


$echo "echo $$" | ./shell
6494
The shell ignores all wordsand characters proceeded by a # character on a line.

$echo "echo 'hello world' #this will be ignored!" | .shell
'hello world'
Operators guitar
The Shell specially interprets the following operator characters:  ; - command separator
Commands separated by a ; are executed sequentially.


$echo "echo 'hello' ; echo 'world'" | ./shell
'hello'
'world'
&& - AND logical separator
