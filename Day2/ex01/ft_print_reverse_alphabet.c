/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmadlala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:40:58 by nmadlala          #+#    #+#             */
/*   Updated: 2020/06/23 11:41:39 by nmadlala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_print_reverse_alphabet(void)
{
	char i;
	i = 'z';
	while (i >= 'a')
	{
		ft_putchar(i);
		i--;	
	}
}

int main(void)
{
	ft_print_reverse_alphabet();
	return 0;
}
