#!/bin/zsh
#include <unistd.h>

void ft_putchar(char ptr);
void ft_putnbr(int ptr);
void ft_addr(void *ptr);

int main(void);
{
	int a;
	int b;
	int *ptr;

	a = 3;
	b = 42;
	ptr =&b;

	ft_putaddr(ptr +1);
	ft_putchar(' ');
	ft_putnbr(*(ptr + 1));
	ft_putchar('\n');
	return(0);  
}
