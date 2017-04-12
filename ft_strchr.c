/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 14:56:58 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/11 19:39:33 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *ptr;

	if ((char)c == '\0')
		return ("\0");
	ptr = (char *)s;
	while (*ptr)
	{
		if (*ptr == (char)c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
/*
int		main()
{
	char str[7] = "abcdef";
	char str2[5] = "ghi";
	printf("my %s\n", ft_strchr(str, 'f'));
	printf("re %s\n", strchr(str, 'f'));
	return (0);
}*/
