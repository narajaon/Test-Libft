/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 19:23:48 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/13 15:56:44 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char *str;
	char *ptr;
	int i;
	int i_2;

	i = 0;
	i_2 = 0;
	if (!(str = ft_strnew(ft_strlen(s))))
		return (NULL);
	ptr = (char *)s;
	while ((*ptr == ' ' || *ptr == '\n' || *ptr == '\t') && *ptr)
		ptr++;
	while (ptr[i])
		i++;
	i--;
	while ((ptr[i] == ' ' || ptr[i] == '\n' || ptr[i] == '\t') && ptr[i])
		i--;
	while (i_2 <= i)
	{
		str[i_2] = ptr[i_2];
		i_2++;
	}
	return (str);
}
/*
int		main()
{
	char str[] = "\tarawr  awawe waeaw    ";

	printf("res => %s", ft_strtrim(str));
	return (0);
}
*/
