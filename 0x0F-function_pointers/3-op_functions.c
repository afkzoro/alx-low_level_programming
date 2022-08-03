#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
		* op_add - Function to sum two numbers
		* @a: First number
		* @b: second number
		*
		* Return: Sum of a and b
		*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
		* op_sub - Function to subtract two numbers
		* @a: First number
		* @b: Second number
		*
		* Return: Return difference of two numbers
		*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
		* op_mul - Function to multiply two numbers
		* @a: Fisrt number
		* @b: Second number
		*
		* Return: Multplication of two numbers
		*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
		* op_div - Function to divide two numbers
		* @a: First number
		* @b: Second number
		*
		* Return: Divison of two numbers
		*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
		* op_mod - Modulus of two numbers
		* @a: First number
		* @b: Second number
		*
		* Return: Modulus of a and b
		*/
int op_mod(int a, int b)
{
	return (a % b);
}
