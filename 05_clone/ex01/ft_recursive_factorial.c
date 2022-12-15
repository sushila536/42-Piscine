/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suprajap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:23:45 by suprajap          #+#    #+#             */
/*   Updated: 2022/12/13 21:03:57 by suprajap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb > 0)
	{
		fact *= nb * ft_recursive_factorial (nb - 1);
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
		printf("%d = %d\n", nb,ft_recursive_factorial(nb));
		nb++;
	}
	return(0);
}*/
