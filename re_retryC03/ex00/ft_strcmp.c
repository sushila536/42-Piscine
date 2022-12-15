/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suprajap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:23:13 by suprajap          #+#    #+#             */
/*   Updated: 2022/12/11 11:11:41 by suprajap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strcmp(char	*s1, char	*s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
int	main()
{
	char	s1[] = "abCd";
	char	s2[] = "abcd";
	int	result;

	result = ft_strcmp(s1, s2);
	printf("%d\n", result);

	char s3[] = "abcd";
	char s4[] = "abcd";
	int result1;

	result1 = ft_strcmp(s3, s4);
	printf("%d\n", result1);
	return 0;
}*/
