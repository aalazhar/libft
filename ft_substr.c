/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalazhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:35:21 by aalazhar          #+#    #+#             */
/*   Updated: 2021/11/19 12:19:04 by aalazhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*ptr;
	size_t			j;

	if (s == NULL)
		return (NULL);
	if (len > ft_strlen(s))
		ptr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	else
		ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		*ptr = '\0';
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
			ptr[j++] = s[i];
		i++;
	}
	ptr[j] = '\0';
	return (ptr);
}
