/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suprajap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 19:04:51 by suprajap          #+#    #+#             */
/*   Updated: 2022/12/13 21:12:07 by suprajap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power == 0)
	{
		return (1);
	}
	else if (power > 0)
	{
		res *= nb * ft_recursive_power(nb, power - 1);
	}
	return (res);
}

/*#include <stdio.h>
int	main()
{
	int nb = 3;
	int power = 2;

	printf("3 to the power of 2 is %d", ft_recursive_power(3, 2));
	return(0);
}*/
