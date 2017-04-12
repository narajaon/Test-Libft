/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 13:49:10 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/11 19:39:39 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int		main()
{
	char str[7];
	char str2[5] = "copy";
	printf("%s\n", ft_strcpy(str, str2));
//	printf("%s\n", strcpy(str, str2));
	//printf("%s", str);
	return (0);
}*/
