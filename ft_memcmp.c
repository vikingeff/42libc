/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 22:01:24 by gleger            #+#    #+#             */
/*   Updated: 2013/11/20 22:01:26 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	loop;
	const unsigned char	*str;
	const unsigned char	*str2;
	ft_putstr("ft_memcmp");
	loop = 0;
	str = s1;
	str2 = s2;
    while (loop < n)
    {
    	if (*(str + loop) == *(str2 + loop))
			loop++;
		else
			break;
	}
	if (loop == n)
		return(0);
	return (*(str + loop) - *(str2 + loop));
}
