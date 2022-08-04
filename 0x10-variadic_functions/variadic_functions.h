#ifndef VARIADIC_FNS
#define VARIADIC_FNS
#define FORMAT(f) ("%"#f)
typedef struct listTypes
{
	char *check;
	void (*f)();
} l_type;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
