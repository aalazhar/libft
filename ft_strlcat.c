/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalazhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:26:53 by aalazhar          #+#    #+#             */
/*   Updated: 2021/11/21 17:17:37 by aalazhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*s2;
	size_t	i;
	size_t	j;
	size_t	l;
	size_t	res;

	l = 0;
	res = 0;
	s2 = (char *)src;
	i = ft_strlen(dst);
	j = ft_strlen(s2);
	if (i < size)
		res = j + i;
	else
		res = j + size;
	while (s2[l] && i + 1 < size)
	{
		dst[i] = s2[l];
		i++;
		l++;
	}
	dst[i] = '\0';
	return (res);
}
