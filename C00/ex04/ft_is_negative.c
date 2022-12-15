/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suprajap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:15:43 by suprajap          #+#    #+#             */
/*   Updated: 2022/11/29 13:26:19 by suprajap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
	}	
	else
	{
		write(1, "N", 1);
	}		
}
/*
int	main(void)
{
	ft_is_negative(4);
	ft_is_negative(-4);
	ft_is_negative(0);
	return (0);
}*/
