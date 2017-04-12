/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 19:11:04 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/11 19:38:46 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;
	char		*str;
	const char	*str2;

	i = 0;
	str = dest;
	str2 = src;
	while (i < n)
	{
		if (str2[i] == c)
		{
			str[i] = str2[i];
			return (dest + i + 1);
		}
		str[i] = str2[i];
		i++;
	}
	return (NULL);
}
/*
int		main()
{
	char str[10] = "";
	char str2[] = "ahuert ke koukou";
	//printf("%s\n", ft_memccpy(str, str2, 'x', 0));
	printf("%s\n", memccpy(str, str2, 'x', 0));
	printf("%s", str);
	return (0);
}*/
