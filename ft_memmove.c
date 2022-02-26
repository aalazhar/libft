/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalazhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:03:22 by aalazhar          #+#    #+#             */
/*   Updated: 2021/11/18 14:21:01 by aalazhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*srcc;
	char	*dstc;
	size_t	i;

	i = -1;
	srcc = (char *)src;
	dstc = (char *)dst;
	if (!srcc && !dstc)
		return (NULL);
	if (srcc < dstc)
	{
		while ((int)(--len) >= 0)
		{
			dstc[len] = srcc[len];
		}
	}
	else
	{
		while (++i < len)
			dstc[i] = srcc[i];
	}
	return (dst);
}
