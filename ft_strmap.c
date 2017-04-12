/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 14:28:14 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/12 16:46:24 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	ft_up(char c)
{
	char a;

	a = c - 32;
	return (a);
}
*/
char	*ft_strmap(char const *s, char (*f)(char))
{
	char *str;
	char *ptr;
	int i;

	i = 0;
	str = ft_strnew(ft_strlen(s));
	ptr = (char *)s;
	while (ptr[i])
	{
		str[i] = f(ptr[i]);
		i++;
	}
	return (str);
}
/*
int		main()
{
	char str[] = "testtestoewqrqwrrtewtwetwetwet";
	char *ptr;
	char (*f)(char);

	f = ft_up;
	ptr = ft_strmap(str, f);
	printf("tes %s\n", str);
	printf("re  %s", ptr);
	return (0);
}
*/
