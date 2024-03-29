#ifndef MAIN_H
#define MAIN_H

/**
 * main - header file for prototypes
 * void prototypes(void)
 * int prototypes(int)
 * @c: prints character
 * _putchar: instead of printf
 * Return: Success
 */

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n); *char *_strncpy(char *dest, char *src, int n); *int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n); *char *string_toupper(char *);
void reverse_array(int *a, int n); *char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int n);
void reset_to_98(int *n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);
#endif
