/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmadlala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 09:41:56 by nmadlala          #+#    #+#             */
/*   Updated: 2020/06/24 10:24:32 by nmadlala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putnbr(int nb)
{
	write(1,&nb,1);
	return(0);
}
int main()
{
	ft_putnbr(42);
	return (0);
}
