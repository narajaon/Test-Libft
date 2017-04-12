/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 16:26:29 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/12 09:30:03 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int i_dest;
	int i_src;

	i_dest = 0;
	i_src = 0;
	while (dest[i_dest])
		i_dest++;
	while (src[i_src])
	{
		dest[i_dest + i_src] = src[i_src];
		i_src++;
	}
	dest[i_dest + i_src] = '\0';
	return (dest);
}
/*
int		main()
{
	char str[4];
	char str2[4];
	printf("%s\n", strcat(str2, "42"));
	//printf("%s\n", strcat(str2, "42"));
	//printf("%s", str);
	return (0);
}*/
