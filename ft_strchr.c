/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 22:02:50 by gleger            #+#    #+#             */
/*   Updated: 2013/11/20 22:02:51 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	loop;
	int	size_s;

	loop = 0;
	size_s = ft_strlen(s);
	if (c == 0)
		return ((char *)s + size_s);
	while (loop < size_s)
	{
		if (*(s + loop) == c)
			break;
		loop++;
	}
	if (loop == size_s)
		return (NULL);
	return ((char *)s + loop);
}
