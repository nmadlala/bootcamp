/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmadlala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 13:49:25 by nmadlala          #+#    #+#             */
/*   Updated: 2020/06/26 14:16:39 by nmadlala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#!/bin/zsh
#include <stdio.h>

int ft_fibonacci(int index)
{
	if (index < 0)
	{	
		return(-1);
	}
	if(index == 0)
	{
		return (0);
	}
	if(index == 1)
	{
		return (1);
	}

	return (ft_fibonacci(index)+ ft_fibonacci(index - 2));
}
