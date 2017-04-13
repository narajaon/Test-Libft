/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 14:56:58 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/13 17:56:59 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *ptr;

	ptr = (char *)s;
	while (*ptr)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
	}
	if (c == '\0')
		return (ptr);
	return (NULL);
}
/*
int		main()
{
	char str[] = "abcd\0efgh";
	char str2[] = "abcd\0efgh";
	printf("my %s\n", ft_strchr(str, '\0'));
	printf("re %s\n", strchr(str2, '\0'));
	return (0);
}
*/
