/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 17:12:03 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/11 19:40:13 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		len;

	len = ft_strlen((char *)s) - 1;
	if ((char)c == '\0')
		return ("\0");
	ptr = (char *)s;
	while (len)
	{
		if (ptr[len] == (char)c)
			return (ptr + len);
		len--;
	}
	return (NULL);
}
/*
int		main()
{
	char str[] = "abcdefretw frtew";
	char str2[5] = "ghi";
	printf("my %s\n", ft_strrchr(str, 'x'));
	printf("re %s\n", strrchr(str, 'x'));
	return (0);
}*/
