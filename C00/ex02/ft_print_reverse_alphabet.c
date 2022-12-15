/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suprajap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:46:24 by suprajap          #+#    #+#             */
/*   Updated: 2022/11/29 13:23:35 by suprajap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
int main(void)
{
	ft_print_reverse_alphabet();
	return(0);
}
*/

void	ft_print_reverse_alphabet(void)
{
	char	i;

	i = 122;
	while (i <= 122 && i >= 97)
	{
		write(1, &i, 1);
		i--;
	}
}
