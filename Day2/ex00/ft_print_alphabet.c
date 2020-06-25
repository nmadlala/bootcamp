/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmadlala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:51:07 by nmadlala          #+#    #+#             */
/*   Updated: 2020/06/23 11:35:56 by nmadlala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



# include <unistd.h>
#
void ft_putchar(char c) {write( STDOUT_FILENO, &c, 1); }

void ft_print_alphabet()
{
	char l;
	l = 'a';

	while (l <= 'z')
	{	
		ft_putchar(l);
		l++;
	}
}

int main(void)
{
	ft_print_alphabet();
	return 0;
}
