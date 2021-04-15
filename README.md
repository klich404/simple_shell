# Simple Shell
An implementation of a Simple Shell that can handle both modes: Interactive and non interactive, and any command available in the enviroment and additional arguments, and some simple bult-ins.
##  Install

To run this implementation of simple shell, just download all the files in the following repository: [click here to download](https://github.com/klich404/simple_shell), compile and execute.
This programs was writen and compiled using Ubuntu 18 and gcc 4.8.5.

## Features

This version of a simple shell can:
- Run in interactive and non interactive mode
- handle all commands available in the PATH with addition arguments
- Display a prompt and wait for the user to type a command. A command line always ends with a new line.
- Prompt is displayed again each time a command has been executed.
- Run simple command lines: no semicolons, no pipes, no redirections or any other advanced features.
- If an executable cannot be found, it will print an error message and display the prompt again.
- Handle errors.
- Handle the “end of file” condition (Ctrl+D)
- Handle exit() and env built-in commands


This programm is open source and can be accessed from the the public repository in Github linked above.

## Manual

For more information about this function you can [read its man page in this link](https://github.com/klich404/simple_shell/blob/main/man_1_simple_shell).

#### Examples

Some commands you can run and its result

```sh
julien@ubuntu:~/shell$ ./shell
$ls
README.md   _strcat.c   _strncmp.c  com_storer.c    full_route_cmd.c    main.c  non_intetactive_mode.c  ssh _printf.c   _strcmp.c   empty_cmd_check.c   holberton.h n_com_storer.c  read_line.c  _printf_functions.c    _strdup.c   built_in.c  free_cmd.c  interactive_mode.c  n_read_line.c   slash_to_cmd.c
$/bin/ls
README.md   _strcat.c   _strncmp.c  com_storer.c    full_route_cmd.c    main.c  non_intetactive_mode.c  ssh _printf.c   _strcmp.c   empty_cmd_check.c   holberton.h n_com_storer.c  read_line.c  _printf_functions.c    _strdup.c   built_in.c  free_cmd.c  interactive_mode.c  n_read_line.c   slash_to_cmd.c
$/bin/ls -l
total 124
-rw-r--r-- 1 julianeme julianeme    15 Apr 14 10:38 README.md
-rw-r--r-- 1 julianeme julianeme   906 Apr 14 17:29 _printf.c
-rw-r--r-- 1 julianeme julianeme  1526 Apr 14 17:29 _printf_functions.c
-rw-r--r-- 1 julianeme julianeme   576 Apr 14 10:30 _strcat.c
-rw-r--r-- 1 julianeme julianeme   292 Apr 14 10:30 _strcmp.c
-rw-r--r-- 1 julianeme julianeme   447 Apr 14 10:30 _strdup.c
-rw-r--r-- 1 julianeme julianeme   362 Apr 14 10:30 _strncmp.c
-rwxr-xr-x 1 julianeme julianeme 22576 Apr 14 16:23 a.out
-rw-r--r-- 1 julianeme julianeme   505 Apr 14 17:29 built_in.c
-rw-r--r-- 1 julianeme julianeme   729 Apr 14 10:30 com_storer.c
-rw-r--r-- 1 julianeme julianeme   347 Apr 14 18:14 empty_cmd_check.c
-rw-r--r-- 1 julianeme julianeme   238 Apr 14 10:30 free_cmd.c
-rw-r--r-- 1 julianeme julianeme   728 Apr 14 17:29 full_route_cmd.c
-rw-r--r-- 1 julianeme julianeme  1224 Apr 14 20:02 holberton.h
-rw-r--r-- 1 julianeme julianeme   939 Apr 14 17:29 interactive_mode.c
-rw-r--r-- 1 julianeme julianeme   193 Apr 14 10:35 main.c
-rw-r--r-- 1 julianeme julianeme   737 Apr 14 10:35 n_com_storer.c
-rw-r--r-- 1 julianeme julianeme   348 Apr 14 15:40 n_read_line.c
-rw-r--r-- 1 julianeme julianeme  1103 Apr 14 20:03 non_intetactive_mode.c
-rw-r--r-- 1 julianeme julianeme   372 Apr 14 17:29 read_line.c
-rw-r--r-- 1 julianeme julianeme   975 Apr 14 20:03 slash_to_cmd.c
-rwxr-xr-x 1 julianeme julianeme 22816 Apr 14 20:48 ssh
$^[[C^[[C^[[C
2 :    : command not found
$exit
julianeme@DESKTOP-E90095D:~/simple_shell$ echo "/bin/ls" | ./ssh

$ echo "/bin/ls" | ./shell
README.md   _strcat.c   _strncmp.c  com_storer.c    full_route_cmd.c    main.c  non_intetactive_mode.c  ssh _printf.c   _strcmp.c   empty_cmd_check.c   holberton.h n_com_storer.c  read_line.c  _printf_functions.c    _strdup.c   built_in.c  free_cmd.c  interactive_mode.c  n_read_line.c   slash_to_cmd.c

```

## License

**Free Software!**

## Autores

**Carlos Cruz Zuluaga** - [klich404](https://github.com/klich404)
**Julian Tabares Velasquez** - [julianeme](https://github.com/Julianeme)