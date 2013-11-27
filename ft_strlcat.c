/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 22:02:22 by gleger            #+#    #+#             */
/*   Updated: 2013/11/27 01:27:13 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
	char *str_dst = dst;
        const char *str_src = src;
        size_t n = size;
        size_t buf_size;

        while (n-- != 0 && *str_dst != '\0')
                str_dst++;
        buf_size = str_dst - dst;
        n = size - buf_size;
        if (n == 0)
                return(buf_size + ft_strlen(str_src));
        while (*str_src != '\0') {
                if (n != 1) {
                        *str_dst++ = *str_src;
                        n--;
                }
                str_src++;
        }
        *str_dst = '\0';
        return(buf_size + (str_src - src));
}
