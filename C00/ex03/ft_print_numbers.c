/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suprajap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:08:51 by suprajap          #+#    #+#             */
/*   Updated: 2022/11/29 13:24:35 by suprajap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	i;

	i = 48;
	while (i >= 48 && i <= 57)
	{
		write(1, &i, 1);
		i++;
	}
}
/*
int	main(void)
{
	ft_print_numbers ();
	return (0);
}*/
