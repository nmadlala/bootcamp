#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c)
{
	write(1,&c,1);
	return 0;
}

void ft_is_negative(int n)
{
	if(n >= 0)
	{
		ft_putchar('P');
	}

	else if(n<0)
	{
		ft_putchar('N');
	}
	
}

int main()
{	
	ft_is_negative('b');
	return 0;
}
