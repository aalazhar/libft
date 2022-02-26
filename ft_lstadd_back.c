/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalazhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 10:58:23 by aalazhar          #+#    #+#             */
/*   Updated: 2021/11/20 15:31:23 by aalazhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*lst2;

	lst2 = *alst;
	if (lst2 != NULL)
	{
		while (lst2->next != NULL)
			lst2 = lst2->next;
		lst2->next = new;
	}
	else
		*alst = new;
}
