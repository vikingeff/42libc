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

/*
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;
	ft_putstr("ft_strncmp");
	index = 0;
	if (n != 0 && *s1 != '\0' && *s2 != '\0')
	{
		while(index < n)
		{
			if (*(s1 + index) == *(s2 + index))
				index++;
			else
				return (*(s1 + index) - *(s2 + index));
		}
	}
	return (0);
	if ((*s1 - *s2) < 0)
		result = -1;
	else if ((*s1 - *s2) > 0)
		result = 1;
	else
		result = 0;
	n++;

}*/

#include "libft.h"

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
    /*size_t	index;
    unsigned char	*src;
    unsigned char	*find;
    int	test;

    index = 0;
    test = 0;
    src = (unsigned char *)s1;
    find = (unsigned char *)s2;
    if (n == 0)
		return (0);
	while (n != 0)
	{
		//printf("%c - %c\n", *(src + index), *(find + index));
		if (*(src + index) == 0)
			break;
		test = *(src + index) - *(find + index);
		//printf("%d\n", test);
		if (test != 0)
			return (test);
		index++;
		n--;
	}
	return (0);*/
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	while (str1[i] && str2[i] && (i < n))
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return (str1[i] - str2[i]);
}
