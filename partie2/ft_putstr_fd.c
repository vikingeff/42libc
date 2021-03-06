/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 22:23:02 by gleger            #+#    #+#             */
/*   Updated: 2013/11/21 10:52:17 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int	loop;

	loop = 0;
	while (*(s + loop) != '\0')
	{
		ft_putchar_fd(*(s + loop), fd);
		loop++;
	}
}
