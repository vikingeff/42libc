/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 19:08:26 by gleger            #+#    #+#             */
/*   Updated: 2013/11/20 20:36:13 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

#define D_ERROR { printf("Error Line %d, Funct %s ", __LINE__ - 1, __func__); return (0); }

int		uf_test_atoi(void)
{
	if (atoi("12-3") != ft_atoi("12-3"))
		D_ERROR
	if (atoi("-+123") != ft_atoi("-+123"))
		D_ERROR
	if (atoi("a123") != ft_atoi("a123"))
		D_ERROR
	if (atoi("123a") != ft_atoi("123a"))
		D_ERROR
	if (atoi("123") != ft_atoi("123"))
		D_ERROR
	if (atoi("-123") != ft_atoi("-123"))
		D_ERROR
	if (atoi("+123") != ft_atoi("+123"))
		D_ERROR
	if (atoi(" 123") != ft_atoi(" 123"))
		D_ERROR
	if (atoi(" - 123") != ft_atoi(" - 123"))
		D_ERROR
	if (atoi("\t -123") != ft_atoi("\t-123"))
		D_ERROR
	if (atoi("-2147483648") != ft_atoi("-2147483648"))
		D_ERROR
	if (atoi("2147483647") != ft_atoi("2147483647"))
		D_ERROR
	return (1);
}

int		uf_test_isalpha(void)
{
	int	i;

	i = 0;
	while (i < 255)
	{
		if (isalpha(i) != ft_isalpha(i))
			D_ERROR
		i = i + 1;
	}
	return (1);
}

int	main(void)
{
	ft_putstr("test");
	/*int	res_test = 0;

	res_test = uf_test_isalpha();
	if (res_test == 0)
		printf("\033[31mFAIL\033[0m\n");
	else
		printf("\033[32mOK\033[0m\n");
	return (0);*/
}
