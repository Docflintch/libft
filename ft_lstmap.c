/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enchueco <enchueco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:45:31 by enchueco          #+#    #+#             */
/*   Updated: 2025/11/14 18:06:35 by enchueco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*traveler;

	if (!lst || !f || !del)
		return (NULL);
	start = ft_lstnew(f(lst->content));
	if (!start)
		return (NULL);
	traveler = start;
	while (lst->next)
	{
		lst = lst->next;
		traveler->next = ft_lstnew(f(lst->content));
		if (!traveler->next)
		{
			ft_lstclear(&start, del);
			return (NULL);
		}
		traveler = traveler->next;
	}
	return (start);
}
