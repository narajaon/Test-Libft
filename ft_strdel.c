/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 11:25:55 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/12 12:27:55 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strdel(char **as)
{
	free(*as);
	as = NULL;
}

int		main()
{
	char *tab;
	char **ptr;
	int i;

	i = 5;
	tab = (char *)malloc(sizeof(char) * (i + 1));
	ptr = &tab;
	while (i < 5)
	{
		tab[i] = 'o';
		i++;
	}
	printf("pre: %s\n", tab);
//	ft_strdel(ptr);
//	printf("aft: %s\n", tab);
	return (0);
}
