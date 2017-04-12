/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 17:06:16 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/12 09:40:16 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*s_;
	size_t	i;

	if (n == 0)
		return ;
	s_ = s;
	i = 0;
	while (i < n)
	{
		s_[i] = 0;
		i++;
	}
}
/*
int		main()
{
	char str[] = "abcasdawqwrqwe qwrqw qwrqw";
	char str2[] = "abcasdawqwrqwe qwrqw qwrqw";

	ft_bzero(str, 5);
	printf("b %s\n", str);
	bzero(str2, 5);
	printf("f %s", str2);
	return (0);
}*/
