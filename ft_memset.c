/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 21:59:12 by gleger            #+#    #+#             */
/*   Updated: 2013/11/25 13:13:15 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	loop;
	char	*str;

	str = b;
	if (len != 0)
	{
		loop = 0;
		while (loop < len)
		{
			*(str + loop) = c;
			loop++;
		}
	}
	return (b);
}
