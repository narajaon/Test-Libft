/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 16:09:02 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/11 19:39:20 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	c_;
	char			b_[len];
	char			*b__;
	size_t			i;
	size_t			j;

	i = 0;
	j = 0;
	c_ = c;
	b__ = b;
	while (i < len)
	{
		b_[i] = c_;
		i++;
	}
	while (b__[j])
	{
		b_[i + j] = b__[j];
		j++;
	}
	b_[i + j] = '\0';
	b = b_;
	return (b);
}
/*
int		main()
{
	char str[10] = "bcser";
	char str2[10] = "bcser";

	printf("ft %s", ft_memset(str, '5', 10));
	printf("ft %s", memset(str2, '5', 10));
	return (0);
}*/
