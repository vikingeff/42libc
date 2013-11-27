/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 22:01:13 by gleger            #+#    #+#             */
/*   Updated: 2013/11/20 22:01:14 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
  const unsigned char *ptr;
  size_t  loop;

	if (n != 0 && s != NULL)
  {
    ptr = s;
    loop = 0;
    while (loop < n)
    {
      if (*(ptr + loop) == (unsigned char)c)
        return ((void *)ptr + loop);
      loop++;
    }
  }
  return (NULL);
}
