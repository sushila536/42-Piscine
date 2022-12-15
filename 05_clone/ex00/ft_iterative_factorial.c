/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suprajap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:44:18 by suprajap          #+#    #+#             */
/*   Updated: 2022/12/13 21:02:49 by suprajap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	while (nb > 0)
	{
		fact *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (fact);
}

/*#include <stdio.h>
int main()
{
	int	nb;
	nb = -1;
	while (nb < 10)
	{
		printf("%d = %d\n", nb,ft_iterative_factorial(nb));
		nb++;
	}
	return(0);
}*/
