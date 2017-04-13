/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 18:52:50 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/13 17:10:55 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*str;
	const char	*str2;

	i = 0;
	str = dst;
	str2 = src;
	while (i < n)
	{
		str[i] = str2[i];
		i++;
	}
	return (dst);
}
/*
int		main()
{
	char str[10];
	char str2[] = "ah ke koukou";
	printf("%s", ft_memcpy(str, str2, 4));
	printf("%s", memcpy(str, str2, 4));
	return (0);
}*/
