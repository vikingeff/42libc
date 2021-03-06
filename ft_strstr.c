/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 22:03:11 by gleger            #+#    #+#             */
/*   Updated: 2013/11/20 22:03:12 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	*ft_strstr(const char *s1, const char *s2)
{
	int	loop;
	int	size_s1;
	int	size_s2;
	int	index;
	//sft_putstr("ft_strstr");
	loop = 0;
	index = 0;
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	if (size_s2 == 0)
		return ((char *)s1);
	while (loop < size_s1)
	{
		if (*(s1 + loop) == *(s2 + index))
		{
			index++;
			if (index == size_s2)
				break;
		}
		loop++;
	}
	if (loop == size_s1 && index != size_s2)
		return (NULL);
	return ((char *)s1 + loop - size_s2 + 1);
}*/
char	*ft_strstr(const char *str, const char *target)
{
	char *p1 = (char*)str;
	if (!*target)
	  	return (p1);
	  while (*p1)
	  {
	    char *p1Begin = p1;
	    char *p2 = (char*)target;
	    while (*p1 && *p2 && *p1 == *p2)
	    {
	      p1++;
	      p2++;
	    }
	    if (!*p2)
	      return p1Begin;
	    p1 = p1Begin + 1;
	  }
	  return (NULL);
}
