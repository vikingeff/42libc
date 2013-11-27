/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 22:02:58 by gleger            #+#    #+#             */
/*   Updated: 2013/11/20 22:02:59 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	loop;
	int	size_s;
	int	buf_index;

	loop = 0;
	buf_index = -1;
	size_s = ft_strlen(s);
	if (c == 0)
		return ((char *)s + size_s);
	while (loop < size_s)
	{
		if (*(s + loop) == c)
			buf_index = loop;
		loop++;
	}
	if (buf_index == -1)
		return (NULL);
	return ((char *)s + buf_index);
}
