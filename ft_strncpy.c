/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 22:02:13 by gleger            #+#    #+#             */
/*   Updated: 2013/11/20 22:02:14 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	unsigned int	loop;
	unsigned int	size_s2;

	loop = 0;
	size_s2 = 0;
	size_s2 = ft_strlen(s2);
	while (loop < n)
	{
		if (loop < size_s2)
			*(s1 + loop) = *(s2 + loop);
		else
			*(s1 + loop) = '\0';
		loop++;
	}
	return (s1);
}
