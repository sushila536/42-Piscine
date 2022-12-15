/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suprajap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:38:39 by suprajap          #+#    #+#             */
/*   Updated: 2022/11/29 13:22:57 by suprajap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	i;

	i = 97;
	while (i >= 97 && i <= 122)
	{
		write(1, &i, 1);
		i++;
	}
}
/*
int main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
