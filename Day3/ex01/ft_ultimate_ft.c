#!/bin/zsh/
#include <unistd.h>

void ft_putnbr(int ptr);
void ft_putaddr( void *ptr);

void ft_ultimate_ft(int *********nbr)
{
	write(1, &nbr, 1);
	return (0);
}


int main(void)
{
	int a;
	int *ptr;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;
	int *********ptr9;

	a =42;
	ptr = &a;
	ptr2=&ptr;
	ptr3=&ptr2;
	ptr4=&ptr3;
	ptr5=&ptr4;
	ptr6=&ptr5;
	ptr7=&ptr6;
	ptr8=&ptr7;
	ptr9=&ptr8;
	ft_putnbr(*********ptr9);
	return (0);
}
