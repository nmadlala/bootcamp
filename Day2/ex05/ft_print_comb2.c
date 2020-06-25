/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmadlala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 09:09:00 by nmadlala          #+#    #+#             */
/*   Updated: 2020/06/23 09:53:59 by nmadlala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#!/bin/zsh
#include <unistd.h>

int ft_val (char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_print_comb2(void)
{
	int i =0;
	int j=0;
	char i1= '0';
	char j1='0';

	while (i <= 99)
	{
		while (j <= 99)
		{
			ft_val(i1);
			ft_val(j1);
			ft_val(',');
			ft_val(' ');

			++j;
			++j1;
			
		}
		++i;
		++i1;
	}
}

int main (void)
{
	ft_print_comb2();
	return (0);
}
