/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 09:57:04 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/14 10:58:35 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	**mem;
	size_t	i;

	i = 0;
	if (!(mem = (void **)malloc(sizeof(void *) * (size))))
		return (NULL);
	while (i < size)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}
