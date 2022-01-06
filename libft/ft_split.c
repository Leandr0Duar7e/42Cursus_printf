/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:36:56 by leolivei          #+#    #+#             */
/*   Updated: 2021/11/16 20:26:04 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	**makelst(char const *s, char c, char **ssplit)
{
	unsigned int	i;
	unsigned int	j;
	int				si;

	i = 0;
	si = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[i - 1] != c)
		{
			ssplit[si] = (char *)malloc(i - j + 1);
			if (!ssplit)
				return (0);
			ft_strlcpy(ssplit[si], s + j, i - j + 1);
			si++;
		}
	}
	*(ssplit + si) = 0;
	return (ssplit);
}

static size_t	char_counter(char const *s, char c)
{
	size_t	count;

	if (!s)
		return (0);
	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char			**ssplit;

	ssplit = (char **)malloc(sizeof(char *) * (char_counter(s, c) + 1));
	if (!ssplit || !s)
		return (0);
	makelst(s, c, ssplit);
	return (ssplit);
}
