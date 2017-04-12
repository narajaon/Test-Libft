/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 14:15:31 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/12 14:27:49 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	ft_up(unsigned int i, char *c)
{
	if (i % 2)
		*c = *c - 32;
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	char *ptr;
	int i;

	ptr = s;
	i = 0;
	while (*ptr)
		f(i++, &*ptr++);
}
/*
int		main()
{
	char str[] = "yafarewtryrytuytittyru";
	void (*f)(unsigned int, char *);

	f = ft_up;
	ft_striteri(str, f);
	printf("%s", str);
	return (0);
}
*/
