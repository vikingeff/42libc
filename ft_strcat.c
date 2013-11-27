/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 22:02:22 by gleger            #+#    #+#             */
/*   Updated: 2013/11/20 22:02:23 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int	size_s1;
	int	size_s2;
	int	loop;

	size_s2 = ft_strlen(s2);
	size_s1 = ft_strlen(s1);
	loop = 0;
	while (loop < size_s2)
	{
		*(s1 + size_s1 + loop) = *(s2 + loop);
		loop++;
	}
	return(s1);
}
