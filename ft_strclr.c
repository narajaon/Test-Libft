/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 14:01:16 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/12 14:05:16 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	while (*s)
		*s++ = '\0';
}
/*
int		main()
{
	char str[] = "testest";

	ft_strclr(str);
	printf("%s", str);
	return (0);
}
*/