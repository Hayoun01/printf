# 0x11. C - printf

This project aims to recreate the `printf` function in C. The `printf` function is used to print output on the console. It takes a string as input, which contains a mixture of plain text and format specifiers. The format specifiers begin with the `%` character and are followed by a letter that determines the type of output to be printed.

## Compilation
The code will be compiled with the following flags:

```c
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
```

## Usage

The _printf function is used to print output on the console. It takes a string as input, which contains a mixture of plain text and format specifiers. The format specifiers begin with the % character and are followed by a letter that determines the type of output to be printed.

The available format specifiers are:

%c - print a single character </br>
%s - print a string of characters </br>
%d or %i - print a signed integer </br>
%u - print an unsigned integer </br>
%o - print an octal number </br>
%x or %X - print a hexadecimal number </br>
%p - print a pointer address </br>
%% - print a percent sign </br>
The _printf function returns the number of characters printed.

Example
Here is an example of how to use the _printf function:

```c
#include "main.h"

int main(void)
{
    _printf("Hello, %s!\n", "world");
    return (0);
}
```
Output:
```
Hello, world!
```
### Authors

This project was completed by [Mohammed Hayyoun](https://github.com/Hayoun01), [Abdellah Staitay](https://github.com/AbdellahStaitay).
