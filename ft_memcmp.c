/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 11:21:10 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/13 17:15:16 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *ptr;
	unsigned char *ptr2;

	ptr = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n)
	{
		if (*ptr2 - *ptr)
			return (*ptr - *ptr2);
		ptr++;
		ptr2++;
		n--;
	}
	return (0);
}

int		main()
{
	char str[] = "1234\0i567";
	char str2[] = "1234\0i568";

	printf("ft: %d\n", ft_memcmp(str, str2, 9));
	printf("re: %d", memcmp(str, str2, 9));
	return (0);
}
