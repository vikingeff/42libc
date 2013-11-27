/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 22:01:43 by gleger            #+#    #+#             */
/*   Updated: 2013/11/20 22:01:45 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int	size_s;
	int	loop;
	char	*str;

	size_s = 0;
	loop = 0;
	size_s = ft_strlen(s1);
	str = malloc(size_s * sizeof(char) + 1);
	if (str == NULL)
	{
		free (str);
		return (NULL);
	}
	while (loop < size_s)
	{
		*(str + loop) = *(s1 + loop);
		loop++;
	}
	return (str);
}
