/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 16:56:29 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/11 19:40:01 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	int i_dest;
	int i_src;

	i_dest = 0;
	i_src = 0;
	while (dest[i_dest])
		i_dest++;
	while (nb > 0)
	{
		dest[i_dest + i_src] = src[i_src];
		i_src++;
		nb--;
	}
	dest[i_dest + i_src] = '\0';
	return (dest);
}
