/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_testor.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gponsine <gponsine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:20:55 by gponsine          #+#    #+#             */
/*   Updated: 2013/11/21 16:45:28 by gponsine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <xlocale.h>
#include "libft.h"

int		main(void)
{
	char	str[256];

	printf("\n>--------------------------------------------------------------------<\n\n");
	printf("function: ");
	scanf("%s", str);
	ft_putchar('\n');
/*
**	STRLEN
*/
	if (strcmp(str, "strlen") == 0)
	{
		char	s[256];
		char	*s2;

		printf("size_t	strlen(const char *s);\n");
		printf("s = ");
		scanf("%s", s);
		s2 = strdup(s);
		printf("\nstrlen(\"%s\") :\n", s);
		printf("%d\n", (int)strlen(s));
		printf("s = %s\n", s);
		printf("\nft_strlen(\"%s\") :\n", s2);
		printf("%d\n", (int)ft_strlen(s2));
		printf("s = %s\n", s2);
		free(s2);
	}
/*
**	STRDUP
*/
	else if (strcmp(str, "strdup") == 0)
	{
		char	s1[256];
		char	*s12;
		char	*sdup;

		printf("char	*strdup(const char *s1);\n");
		printf("s1 = ");
		scanf("%s", s1);
		s12 = strdup(s1);
		printf("\nstrdup(\"%s\") :\n", s1);
		printf("%s\n", sdup = strdup(s1));
		free(sdup);
		printf("\nft_strdup(\"%s\") :\n", s12);
		printf("%s\n", sdup = strdup(s12));
		free(sdup);
	}
/*
**	STRCPY
*/
	else if (strcmp(str, "strcpy") == 0)
	{
		char	s1[256];
		char	*s12;
		char	s2[256];
		char	*s22;

		printf("char	*strcpy(char *s1, const char *s2);\n");
		printf("s1 = ");
		scanf("%s", s1);
		printf("s2 = ");
		scanf("%s", s2);
		s12 = strdup(s1);
		s22 = strdup(s2);
		printf("\nstrcpy(\"%s\", \"%s\") :\n", s1, s2);
		printf("%s\n", strcpy(s1, s2));
		printf("s1 = %s\n", s1);
		printf("s2 = %s\n", s2);
		printf("\nft_strcpy(\"%s\", \"%s\") :\n", s12, s22);
		printf("%s\n", ft_strcpy(s12, s22));
		printf("s1 = %s\n", s12);
		printf("s2 = %s\n", s22);
		free(s12);
		free(s22);
	}
/*
**	STRNCPY
*/
	else if (strcmp(str, "strncpy") == 0)
	{
		char	s1[256];
		char	*s12;
		char	s2[256];
		char	*s22;
		int		n;
		int		n2;

		printf("char	*strncpy(char *s1, const char *s2, size_t n);\n");
		printf("s1 = ");
		scanf("%s", s1);
		printf("s2 = ");
		scanf("%s", s2);
		printf("n = ");
		scanf("%d", &n);
		s12 = strdup(s1);
		s22 = strdup(s2);
		n2 = n;
		printf("\nstrncpy(\"%s\", \"%s\") :\n", s1, s2);
		printf("%s\n", strncpy(s1, s2, n));
		printf("s1 = %s\n", s1);
		printf("s2 = %s\n", s2);
		printf("\nft_strncpy(\"%s\", \"%s\") :\n", s12, s22);
		printf("%s\n", ft_strncpy(s12, s22, n2));
		printf("s1 = %s\n", s12);
		printf("s2 = %s\n", s22);
		free(s12);
		free(s22);
	}
/*
**	ATOI
*/
	else if (strcmp(str, "atoi") == 0)
	{
		char			s[256];
		char			*s2;

		printf("int	atoi(const char *str);\n");
		printf("s = ");
		scanf("%s", s);
		s2 = strdup(s);
		printf("\natoi(\"%s\") :\n", s);
		printf("%d\n", atoi(s));
		printf("\nft_atoi(\"%s\") :\n", s2);
		printf("%d\n", ft_atoi(s2));
	}
	else
		printf("This function does not exist.\n");
	main();
	return (0);
}