/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalazhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 17:32:02 by aalazhar          #+#    #+#             */
/*   Updated: 2021/11/24 13:39:34 by aalazhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	size_t	cnt;
	size_t	i;

	cnt = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			cnt++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (cnt);
}

static char	**ft_free(char **temp)
{
	int	i;

	i = 0;
	while (temp[i])
	{
		free(temp[i]);
		i++;
	}
	free(temp);
	return (NULL);
}

static char	*ft_write(char *word, char const *str, int k, int letters)
{
	int	i;
	int	x;

	i = 0;
	x = k - letters;
	while (i < letters)
		word[i++] = str[x++];
	word[i] = '\0';
	return (word);
}

static char	**ft_tempsplit(char **temp, char const *str, char c, int len)
{
	int	i;
	int	k;
	int	letters;

	i = 0;
	k = 0;
	letters = 0;
	while (str[i] && k < len)
	{
		while (str[i] && str[i] == c)
			i++;
		while (str[i] && str[i] != c)
		{
			i++;
			letters++;
		}
		temp[k] = (char *)malloc(sizeof(char) * (letters + 1));
		if (temp == NULL)
			ft_free(temp);
		ft_write(temp[k], str, i, letters);
		letters = 0;
		k++;
	}
	temp[k] = 0;
	return (temp);
}

char	**ft_split(char const *str, char c)
{
	int		len;
	char	**temp;

	if (str == NULL)
		return (NULL);
	temp = NULL;
	len = ft_countwords(str, c);
	temp = (char **)malloc(sizeof(char *) * (len + 1));
	if (temp == NULL)
		return (NULL);
	ft_tempsplit(temp, str, c, len);
	return (temp);
}
