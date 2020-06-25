void ft_putchar(char ptr);
void ft_putnbr(int ptr);
void ft_putaddr(void *ptr);

void ft_ft(int *nbr)
{
	write(1,&*nbr,2);
	return (0);
}

int main(void)
{
	int a;
	int *ptr;

	a =42;
	ptr = &a;
	ft_putnbr(*ptr);
	return(0);
}
