## 0x00 C - Hello, World

### Learning Objectives
*   Why C programming is awesome
*   Who invented C
*   Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
*   What happens when you type gcc main.c
*   What is an entry point
*   What is main
*   How to print text using printf, puts and putchar
*   How to get the size of a specific type using the unary operator sizeof
*   How to compile using gcc
*   What is the default program name when compiling with gcc
*   What is the official Holberton C coding style and how to check your code with betty-style
*   How to find the right header to include in your source code when using a standard library function
*   How does the main function influence the return value of the program

##### Shell Scripts
*   Allowed editors: vi, vim, emacs
*   All your scripts will be tested on Ubuntu 20.04 LTS
*   All your scripts should be exactly two lines long `($ wc -l file should print 2)`
*   All your files should end with a new line
*   The first line of all your files should be exactly `#!/bin/bash`

##### Betty linter
To run the Betty linter just with command `betty <filename>`:
*   Go to the Betty repository <https://github.com/holbertonschool/Betty>
*   Clone the repo to your local machine
*   cd into the Betty directory
*   Install the linter with `sudo ./install.sh`
*   emacs or vi a new file called betty, and copy the script below:
>   `   \#!/bin/bash  
>       \# Simply a wrapper script to keep you from having to use betty-style  
>       \# and betty-doc separately on every item.  
>       \# Originally by Tim Britton (@wintermanc3r), multiargument added by  
>       \# Larry Madeo (@hillmonkey)  
> 
>       BIN_PATH="/usr/local/bin"
>       BETTY_STYLE="betty-style"
>       BETTY_DOC="betty-doc"
> 
>       if [ "$#" = "0" ]; then
>          echo "No arguments passed."
>          exit 1
>       fi
> 
>       for argument in "$@" ; do
>       echo -e "\n========== $argument =========="  
>       \${BIN_PATH}/${BETTY_STYLE} "$argument"  
>       \${BIN_PATH}/${BETTY_DOC} "$argument"  
>       done`
> 
*   Once saved, exit file and change permissions to apply to all users with `chmod a+x betty`.
*   Move the betty file into `/bin/ directory` or somewhere else in your `$PATH` with  `sudo mv betty /bin/`
*   You can now type `betty <filename` to run the Betty linter!


## 0x01. VARIABLES, IF, ELSE, WHILE

### Learning Objectives
*   What are the arithmetic operators and how to use them
*   What are the logical operators (sometimes called boolean operators) and how to use them
*   What the the relational operators and how to use them
*   What values are considered TRUE and FALSE in C
*   What are the boolean operators and how to use them
*   How to use the if, if ... else statements
*   How to use comments
*   How to declare variables of types char, int, unsigned int
*   How to assign values to variables
*   How to print the values of variables of type char, int, unsigned int with printf
*   How to use the while loop
*   How to use variables with the while loop
*   How to print variables using printf
*   What is the ASCII character set
*   What are the purpose of the gcc flags -m32 and -m64


## 0x02 FUNCTIONS, NESTED LOOPS

### Learning Objectives
* What are nested loops and how to use them
* What is a function and how do you use functions
* What is the difference between a declaration and a definition of a function
* What is a prototype
* Scope of variables
* What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89
* What are header files and how to to use them with #include
    
    
## 0x03 DEBUGGING

### Learning objectives
* What is debugging
* What are some methods of debugging manually
* How to read the error messages    
    
__________ END __________
