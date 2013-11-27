/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 21:58:23 by gleger            #+#    #+#             */
/*   Updated: 2013/11/20 21:58:48 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *s1, const char *s2)
{
	int	loop;
	int	size_s2;

	loop = 0;
	size_s2 = 0;
	size_s2 = ft_strlen(s2);
	while (loop < size_s2)
	{
		*(s1 + loop) = *(s2 + loop);
		loop++;
	}
	*(s1 + loop) = '\0';
	return (s1);
}
