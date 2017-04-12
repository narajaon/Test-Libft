/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 17:05:36 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/12 17:25:56 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] - s2[i])
			return (0);
		i++;
	}
	return (1);
}
/*
int		main()
{
	char str1[] = "a";
	char str2[] = "a";
	printf("%d", ft_strequ(str1, str2));
	return (0);
}
*/
