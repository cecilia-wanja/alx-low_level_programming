#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
extern int _isupper(int c);

// checks for a digit (0 through 9)
extern int _isdigit(int c);

// multiplies two integers
extern int mul(int a, int b);

// prints the numbers, from 0 to 9
extern void print_numbers(void);

// prints 10 times the numbers, from 0 to 14
extern void more_numbers(void);

// draws a straight line in the terminal
extern void print_line(int n);

// draws a diagonal line on the terminal
extern void print_diagonal(int n);

// prints a square
extern void print_square(int size);

// prints a triangle
extern void print_triangle(int size);

// prints an integer
extern void print_number(int n);
#endif

