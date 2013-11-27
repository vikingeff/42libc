/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 22:03:24 by gleger            #+#    #+#             */
/*   Updated: 2013/11/27 11:39:37 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	loop;
	//int	size_s1;
	size_t	size_s2;
	size_t	index;
	ft_putstr("ft_strnstr");
	loop = 0;
	index = 0;
	//size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	if (n == 0 || size_s2 > n)
		return (NULL);
	if (size_s2 == 0)
		return ((char *)s1);
	while ((loop < size_s2) && (index != n))
	{
		if (*(s1 + index) == *(s2 + loop))
		{
			index++;
			loop++;
		}
		index++;
		//if (loop == size_s2 || index == n)
			//return (NULL);
	}
	return ((char *)s1 + (index - size_s2 - 1));
}
