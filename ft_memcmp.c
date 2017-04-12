/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 11:21:10 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/11 19:39:01 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char *ptr;
	const char *ptr2;

	ptr = s1;
	ptr2 = s2;
	while (n && (*ptr || *ptr2))
	{
		if (*ptr2 - *ptr)
			return (*ptr - *ptr2);
		ptr++;
		ptr2++;
		n--;
	}
	return (0);
}
/*
int		main()
{
	char str[10] = "123456";
	char str2[10] = "12345a";

	printf("ft: %d\n", ft_memcmp(str, str2, -1));
	printf("re: %d", memcmp(str, str2, -1));
	return (0);
}*/
