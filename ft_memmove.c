/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 09:57:32 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/13 17:10:44 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*ptr;
	unsigned char		*ptr2;

	ptr = dst;
	ptr2 = (unsigned char *)src;
	if (dst > src)
	{
		while (len--)
			ptr[len] = ptr2[len];
	}
	else
	{
		while (len--)
			*ptr++ = *ptr2++;
	}
	return (dst);
}
/*
int		main()
{
	char str[0xF0] = "thiß ß\xde\xad\xbe\xeftriñg will be øvérlapéd !\r\n";
	char str2[0xF0] = "thiß ß\xde\xad\xbe\xeftriñg will be øvérlapéd !\r\n";

	printf("ft: %s\n", ft_memmove(str + 4, str + 2, 0xF0 - 0xF));
	printf("re: %s", memmove(str2 + 4, str2 + 2, 0xF0 - 0xF));
	return (0);
}
*/
