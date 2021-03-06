/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 14:04:33 by leolivei          #+#    #+#             */
/*   Updated: 2021/10/25 12:52:49 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	lt;
	int		i;

	i = 0;
	lt = (char )c;
	while (s[i] != lt && s[i] != '\0')
		s++;
	if (s[i] != lt)
		return (0);
	return ((char *)s);
}
