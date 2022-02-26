/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalazhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:09:45 by aalazhar          #+#    #+#             */
/*   Updated: 2021/11/21 14:35:42 by aalazhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*de;
	const char	*sr;
	size_t		i;

	i = 0;
	de = (char *)dst;
	sr = (const char *)src;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		de[i] = sr[i];
		i++;
	}
	return (dst);
}
