/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 22:21:55 by gleger            #+#    #+#             */
/*   Updated: 2013/11/21 10:42:34 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
  size_t  index;
  size_t  loop;
  
  if (s)
	{
    str = ft_strnew(len + 1);
    if (str == NULL)
      return (NULL);
    index = start;
    loop = 0;
    while (loop < len)
    {
      *(str + loop) = *(s + index);
      loop++;
      index++;
    }
    *(str + loop) = '\0';
	  return (str);
  }
  return(NULL);
}
