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
	const char	*str_src;
	//ft_putstr("ft_memccpy");
	str_dest = dest;
	str_src = src;
	loop = 0;
	if (n != 0)
	{
		while (loop < n)
		{
			*(str_dest + loop) = *(str_src + loop);
			if ((char)*(str_src + loop) == (char)c)
				return ((void *)dest);
			loop++;
		}
	}
	return (NULL);
}
