/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 09:57:32 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/11 19:39:14 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*ptr;
	const char	*ptr2;

	ptr = dst;
	ptr2 = src;
	while (len)
	{
		*ptr++ = *ptr2++;
		len--;
	}
	return (dst);
}
/*
int		main()
{
	char str[10] = "12345";
	char str2[10] = "";

	printf("ft: %s\n", ft_memmove(str, str2, 3));
	printf("re: %s", memmove(str, str2, 3));
	return (0);
}*/
