/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 22:02:32 by gleger            #+#    #+#             */
/*   Updated: 2013/11/27 00:58:11 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int	size_s1;
	size_t	loop;

	size_s1 = ft_strlen(s1);
	if (n != 0)
	{
		loop = 0;
		while (loop < n)
		{
			if ((*(s1 + size_s1 + loop) = *(s2 + loop)) == 0)
				break;
			loop++;
		}
		*(s1 + size_s1 + loop) = '\0';
	}
	return(s1);
}
