/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 22:03:46 by gleger            #+#    #+#             */
/*   Updated: 2013/11/20 22:03:48 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;
	ft_putstr("ft_strncmp");
	index = 0;
	if (n != 0)
	{
		while(index < n)
		{
			if (*(s1 + index) == *(s2 + index))
				index++;
			else
				break;
		}
	}
	/*if ((*s1 - *s2) < 0)
		result = -1;
	else if ((*s1 - *s2) > 0)
		result = 1;
	else
		result = 0;
	n++;*/
	return (*(s1 + index) - *(s2 + index));
}
