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
	//size_t	loop;
	unsigned char	*str_dest;
	const unsigned char	*str_src;
	unsigned char	letter;

	str_dest = dest;
	str_src = src;
	letter = c;
	//loop = 0;
	/*if (n != 0)
	{
		while (n != 0)
		{
			if (*(str_src + loop) == letter)
				return (str_dest);
			*(str_dest + loop) = *(str_src + loop);
			loop++;
			n--;
		}
	}
	return (0);*/
	if (n != 0)
	{
		while (n != 0)
		{
			if ((*str_dest++ = *str_src++) == letter)
				return (str_dest);
			n--;
		}
	}
	return (0);
}
