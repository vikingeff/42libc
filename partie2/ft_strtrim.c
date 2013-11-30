/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 22:22:24 by gleger            #+#    #+#             */
/*   Updated: 2013/11/21 10:45:00 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void find_limits(const char *str, size_t *begin, size_t *end, int size)
{
  size_t  loop;
  size_t  index;

  index = 0;
  loop = 0;
  while (*(str + loop) == 9 || *(str + loop) == 10 || *(str + loop) == 32)
  {
    index++;
    loop++;
  }
  loop = size-1;
  *begin =  index;
  index = 0;
  while (*(str + loop) == 9 || *(str + loop) == 10 || *(str + loop) == 32)
  {
    index++;
    loop--;
  }
  *end = index;
}

char	*ft_strtrim(char const *s)
{
	char	*str;
  size_t  size_str;
  size_t  *t_start;
  size_t  *t_end;
  size_t  loop;

  t_start = malloc(sizeof(t_start));
  t_end = malloc(sizeof(t_end));
  if (s == NULL || t_start == NULL || t_end == NULL)
    return (NULL);
  size_str = ft_strlen(s);
  find_limits(s, t_start, t_end, size_str);
  if (*t_start == *t_end && *t_start != 0)
    return (NULL);
  loop = *t_start;
  printf("begin %zu - end %zu - size %zu\n", *t_start, *t_end, size_str);
  str = ft_memalloc(size_str - *t_end - *t_start + 1);
  if (str == NULL)
    return (NULL);
  while (loop < (size_str - *t_end))
  {
    printf("%d\n", *(str + loop - *t_start));
    *(str + (loop - *t_start)) = *(s + loop);
    loop++;
  }
  //*(str + loop - *t_start) = '\0';
	return (str);
}
