/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmadlala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 09:01:34 by nmadlala          #+#    #+#             */
/*   Updated: 2020/06/21 11:48:30 by nmadlala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char ft_putchar(char c)
{
	write(1,&c ,1);
	return(0);
}

int

void  ft_(void)
{
	int i,j,k;

	for (i = 0;i <= 9;i++)
	{
		for (j  = i + 1; j <= 9; j++)
		{
			for (k  = j + 1; k <= 9; k++)
			{
				return ( "%d%d%d\n", i , j ,k);
			}
		}
	}
}

int main (void)
{
	
}
