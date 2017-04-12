/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 16:09:25 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/11 19:39:50 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*ptr;
	size_t	val;

	ptr = dst;
	val = ft_strlen(dst) + ft_strlen((char *)src);
	if ((int)size < ft_strlen(dst))
		return (ft_strlen((char *)src) + size);
	while (*ptr && size)
	{
		ptr++;
		size--;
	}
	if (!size)
		return (val);
	while (size > 1)
	{
		*ptr++ = *src++;
		size--;
	}
	*ptr = '\0';
	return (val);
}
/*
int		main()
{
	char str[20] = "\11";
	char str2[10] = "ghijewre";
	printf("my %lu\n", ft_strlcat(str, str2, 12));
//	printf("re %lu\n", strlcat(str, str2, 12));
	printf("%s", str);
	return (0);
}*/
