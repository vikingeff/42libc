/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 22:22:13 by gleger            #+#    #+#             */
/*   Updated: 2013/11/21 10:43:37 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
  size_t  size_join;
  size_t  loop;
    
  size_join = ft_strlen(s1) + ft_strlen(s2) + 1;
  loop = 0;
	str = ft_memalloc(size_join);
  if (str == NULL)
    return (NULL);
  size_join = 0;
  while (loop < ft_strlen(s1))
  {
    *(str + size_join) = *(s1 + loop);
    loop++;
    size_join++;
  }
  loop = 0;
  while (loop < ft_strlen(s2))
  {
    *(str + size_join) = *(s2 + loop);
    loop++;
    size_join++;
  }
  *(str + size_join) = '\0';
	return (str);
}
