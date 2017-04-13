/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 16:09:02 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/13 15:58:09 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *ptr;

	ptr = b;
	while (len)
	{
		*ptr++ = (unsigned char)c;
		len--;
	}
	return (b);
}
/*
int		main()
{
	char str[10] = "bcser";
	char str2[10] = "bcser";

	printf("ft %s\n", ft_memset(str, 'A', 9));
	printf("re %s", memset(str2, 'A', 9));
	return (0);
}
*/
