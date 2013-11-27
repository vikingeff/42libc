/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 22:00:28 by gleger            #+#    #+#             */
/*   Updated: 2013/11/20 22:00:29 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	loop;
	char	*str_dest;
	size_t	index;
	const char	*str_src;
	//ft_putstr("ft_memccpy");
	str_dest = dest;
	str_src = src;
	loop = 0;
	index = 0;
	if (n != 0)
	{
		while (loop < n)
		{
			if (*(str_src + loop) == c)
				break;
			loop++;
		}
		while (*(str_src + loop) != '\0')
		{
			*(str_dest + loop) = *(str_src + loop);
			loop++;
			index++;
		}
		return ((void *)(str_dest + (loop - index)));
	}
	return (NULL);
}
