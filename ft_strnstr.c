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
	size_t	size_s2;
	size_t	index;
	char	*mini;
	char	*mini_off;

	index = 0;
	size_s2 = ft_strlen(s2);
	if (size_s2 != 0)
	{
		if (n == 0 || size_s2 > n)
			return (NULL);
		mini = ft_strdup(s1);
		*(mini + n) = '\0';
		mini_off = ft_strstr(mini, s2);
		if (mini_off == NULL)
			return (NULL);
		index = mini_off - mini;
		return ((char*)(s1) + index);
	}
	return ((char *)s1);
}
