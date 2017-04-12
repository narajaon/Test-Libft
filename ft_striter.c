/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 14:05:27 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/12 14:15:15 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	ft_up(char *c)
{
	*c = *c - 32;
}
*/

void	ft_striter(char *s, void (*f)(char *))
{
	char *ptr;

	ptr = s;
	while (*ptr)
		f(&*ptr++);
}

/*
int		main()
{
	char str[] = "yafarewtrySDRWrytuytittyru";
	void (*f)(char *);

	f = ft_up;
	ft_striter(str, f);
	printf("%s", str);
	return (0);
}
*/
