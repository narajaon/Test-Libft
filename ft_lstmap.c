/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 09:44:38 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/17 12:02:51 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *ptr;
	t_list *ll;

	ptr = lst;
	while (ptr)
	{
		ft_lstadd(&ll, f(ptr));
		ptr = ptr->next;
	}
	return (ll);
}
