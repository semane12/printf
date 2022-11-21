#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * is_printable - evaluate if the char is printable
 * @c: char to be evaluated
 *
 * Return: 1 if c is printable, 0 otherwise
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);
}

/**
 * append_hexa_code - append ascii in hexagnal code to buffer
 * @buffer: array of chars
 * @i: index at which to start appending
 * @ascii_code: ASCII code
 * Return: always 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code always 2 digit long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	beffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}
/**
 * is_digit - verifies if a char is a digit
 * @c: char to be evaluated
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - casts a number to the specified size
 * @num: number to be casted
 * @size: number indicating the type to be casted
 *
 * Return: casted value of num
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - casts a number to the specified size
 * @num: number to be casted
 * @size: number indicating the type to be cated
 *
 * Return: casted value of num
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
