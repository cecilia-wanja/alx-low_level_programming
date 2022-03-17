#ifndef MAIN_H
#define MAIN_H

#checks for uppercase character
int _isupper(int c);

#checks for a digit (0 through 9)
int _isdigit(int c);

#multiplies two integers
int mul(int a, int b);

#prints the numbers, from 0 to 9
void print_numbers(void);

#prints 10 times the numbers, from 0 to 14
void more_numbers(void);

#draws a straight line in the terminal
void print_line(int n);

#draws a diagonal line on the terminal
void print_diagonal(int n);

#prints a square
void print_square(int size);

#prints a triangle
void print_triangle(int size);

#prints an integer
void print_number(int n);
