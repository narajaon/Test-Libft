/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 14:27:48 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/17 11:08:03 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *ll;

	if (!(ll = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!(ll->content = ft_memalloc(content_size)))
		return (NULL);
	ft_memcpy(ll->content, content, content_size);
	if (content == (void *)0)
		ll->content = (void *)0;
	else
		ll->content_size = content_size;
	return (ll);
}
