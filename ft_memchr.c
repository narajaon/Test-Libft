/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 10:55:38 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/12 16:20:54 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char *ptr;

	ptr = s;
	while (n)
	{
		if (*ptr == c)
			return ((void *)ptr);
		ptr++;
		n--;
	}
	return (NULL);
}
/*
int		main()
{
	char str[] = "123erwe 45ewre";
	char str2[] = "123erwe 45ewre";

	printf("ft: %s\n", ft_memchr(str, '5', 3));
	printf("re: %s", memchr(str2, '5', 3));
	return (0);
}
*/
