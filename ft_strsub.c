/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 17:37:21 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/12 17:53:00 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;

	str = ft_strnew(len);
	while (s[start])
		*str++ = s[start++];
	return (str);
}

int		main()
{
	char str1[] = "awqrwqe wqewqe";
	char *str2;

	str2 = ft_strsub(str1, 3, 5);
	printf("%s", str2);
	return (0);
}
