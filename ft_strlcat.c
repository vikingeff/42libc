/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 22:02:22 by gleger            #+#    #+#             */
/*   Updated: 2013/11/27 01:27:13 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	size_dst;
	//int	size_src;
	size_t	loop;
	ft_putstr("ft_strlcat");
	size_dst = ft_strlen(dst);
//	size_src = ft_strlen(src);
	loop = 0;
	while (loop < size)
	{
		*(dst + size_dst + loop) = *(src + loop);
		loop++;
	}
	return(loop);
}
