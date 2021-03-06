/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 22:00:53 by gleger            #+#    #+#             */
/*   Updated: 2013/11/20 22:00:54 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t	loop;
	char	*str;
	const char	*str_src;

	str = s1;
	str_src = s2;
	if (n != 0)
	{
		loop = 0;
		while (loop < n)
		{
			*(str + loop) = *(str_src + loop);
			loop++;
		}
	}
	return (s1);
}
