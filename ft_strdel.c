/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 11:25:55 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/12 14:00:42 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strdel(char **as)
{
	free(*as);
	*as = NULL;
}

/*
int		main()
{
	char *tab;
	char **ptr;
	int i;

	i = 0;
	tab = (char *)malloc(sizeof(char) * (i + 1));
	ptr = &tab;
	while (i < 5)
	{
		tab[i] = 'a';
		i++;
	}
	printf("pre: %s\n", tab);
	ft_strdel(&tab);
	printf("aft: %s\n", *ptr);
	return (0);
}
*/
