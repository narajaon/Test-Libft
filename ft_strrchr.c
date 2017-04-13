/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 17:12:03 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/13 18:19:01 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		len;

	ptr = (char *)s;
	if ((len = ft_strlen(s) - 1) <= 0)
		return (NULL);
	while (len)
	{
		if (s[len] == c)
			return ((char *)s + len);
		len--;
	}
	if (c == '\0')
		return ((char *)s + ft_strlen(s));
	return (NULL);
}
/*
int		main()
{
	char str[] = "abcdefr\0etw frtew";
	//char str2[5] = "ghi";
	printf("my %s\n", ft_strrchr(str, '\0'));
	printf("re %s\n", strrchr(str, '\0'));
	return (0);
}
*/
