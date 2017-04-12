/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 16:46:42 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/12 17:05:17 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	ft_up(unsigned int i, char c)
{
	char a;

	a = c;
	if (i % 2)
		a = c - 32;
	return (a);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	char *ptr;
	int i;

	i = 0;
	str = ft_strnew(ft_strlen(s));
	ptr = (char *)s;
	while (ptr[i])
	{
		str[i] = f(i, ptr[i]);
		i++;
	}
	return (str);
}
/*
int		main()
{
	char str[] = "testtestoewqrqwrrtewtwetwetwet";
	char *ptr;
	char (*f)(unsigned int, char);

	f = ft_up;
	ptr = ft_strmapi(str, f);
	printf("tes %s\n", str);
	printf("re  %s", ptr);
	return (0);
}
*/
