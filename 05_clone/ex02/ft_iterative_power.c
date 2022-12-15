/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suprajap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:43:19 by suprajap          #+#    #+#             */
/*   Updated: 2022/12/13 21:11:10 by suprajap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	while (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}

/*int	main()
{
	int nb = 3;
	int power = 2;

	printf(" %d power %d is %d", nb, power, ft_iterative_power(nb, power));
	return(0);
}*/
