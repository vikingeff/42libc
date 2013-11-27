/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 22:03:59 by gleger            #+#    #+#             */
/*   Updated: 2013/11/26 19:30:50 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_signed(const char *str)
{
	int index;

	index = 0;
	if (str == NULL)
		return 0;
	while (*(str + index) != '\0')
	{
		if (*(str + index) == '-')
			return (index);
		else if (*(str + index) == '+')
			return (index);
		else if (ft_isdigit (*(str + index)))
			return (index);
		else if ((*(str + index) >= 7) && (*(str + index) <= 13))
			index++;
		else if (*(str + index) == 32)
			index++;
		else
			return(index);
	}
	return (0);
}
/*
** Like atoi() this will convert char* to integer if the string given is made
** of numbers. Will return 0 if there is a problem.
*/
int	ft_atoi(const char *str)
{
	int int_value;
	int is_positive;
	unsigned int loop;

	int_value = 0;
	loop = is_signed(str);
	is_positive = 1;
	if (*(str + loop) == '-')
	{
		is_positive = -1;
		loop++;
	}
	else if (*(str + loop) == '+')
		loop++;
	while (loop < ft_strlen(str))
	{
		if (ft_isdigit(*(str + loop)))
			int_value = int_value * 10 + *(str + loop)  - '0';
		else
			break;
		loop++;
	}
	return (is_positive * int_value);
}
