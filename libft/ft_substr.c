/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:45:42 by leolivei          #+#    #+#             */
/*   Updated: 2021/11/15 16:48:35 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;	
	char	*str;

	if (!s)
		return (NULL);
	j = ft_strlen(s);
	if (start >= j)
	{
		str = malloc(sizeof(char));
		if (!str)
			return (0);
		*str = '\0';
		return (str);
	}
	if (j < len)
		return (ft_strdup(s + start));
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < j && i < len)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
