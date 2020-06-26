/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmadlala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 13:36:08 by nmadlala          #+#    #+#             */
/*   Updated: 2020/06/26 13:46:22 by nmadlala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#!/bin/zsh

#include <stdio.h>

unsigned int ft_recursive_factorial(int nb)
{
	int i;
		i =nb;
   	int	fact;
   		fact  =1;
	while(n/i !=n)
	{
		fact =fact *i;
		i--;
	}
	return fact;
}

int main()
{
	int num =42;
	printf("Factorial of %d is %d", num, ft_recursive_factorial(num));
	return 0;
}

