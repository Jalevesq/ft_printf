# ft_printf - School 42 Project

Welcome to my `ft_printf` project! This is one of my first projects in the C programming language, completed as part of the curriculum at School 42.

## Project Overview

The `ft_printf` project is designed to introduce me to the intricacies of formatted output in C, a fundamental skill for any programmer. The task involves recreating the standard C library function `printf` from scratch, implementing its core functionalities, and supporting a variety of format specifiers.

## Features

- **Basic Specifiers:** Handle basic format specifiers such as `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%p`.
- 
## Usage

To use the `ft_printf` function, you can include the provided `ft_printf.h` header in your C program and link it with the compiled `libftprintf.a` library.

```c
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s! My age is %d.\n", "User", 25);
    return 0;
}
