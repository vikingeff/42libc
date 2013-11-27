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
#include <ctype.h>
#include <stdbool.h>

#define D_ERROR { printf("Error Line %d, Funct %s ", __LINE__ - 1, __func__); return (0); }

#define	D_TEST	50
#define RANDT	512
#define LONG	10000

typedef struct	s_test
{
	const char *name;
	int			(*funct)(void);
	bool		set;
}t_test;

void	uf_free_tab(void **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i] != NULL)
	{
		free(tab[i]);
		i = i + 1;
	}
	free(tab);
}

void	uf_add_test(t_test *test, const char *name, int (*funct)(void))
{
	static int	i = 0;

	test[i].name = name;
	test[i].funct = funct;
	test[i].set = true;
	i = i + 1;
}

int		uf_test_tolower(void)
{
	int	i;

	i = 0;
	while (i < 255)
	{
		if (tolower(i) != ft_tolower(i))
			D_ERROR
		i = i + 1;
	}
	return (1);
}


int		uf_test_toupper(void)
{
	int	i;

	i = 0;
	while (i < 255)
	{
		if (toupper(i) != ft_toupper(i))
			D_ERROR
		i = i + 1;
	}
	return (1);
}

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
	printf("%d - %d\n", atoi("-123"), ft_atoi("-123"));
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

int		uf_test_isprint(void)
{
	int	i;

	i = 0;
	while (i < 255)
	{
		if (isprint(i) != ft_isprint(i))
			D_ERROR
		i = i + 1;
	}
	return (1);
}

int		uf_test_isascii(void)
{
	int	i;

	i = 0;
	while (i < 255)
	{
		if (isascii(i) != ft_isascii(i))
			D_ERROR
		i = i + 1;
	}
	return (1);
}

int		uf_test_isalnum(void)
{
	int	i;

	i = 0;
	while (i < 255)
	{
		if (isalnum(i) != ft_isalnum(i))
			D_ERROR
		i = i + 1;
	}
	return (1);
}

int		uf_test_isdigit(void)
{
	int	i;

	i = 0;
	while (i < 255)
	{
		if (isdigit(i) != ft_isdigit(i))
			D_ERROR
		i = i + 1;
	}
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

int	uf_test_strchr(void)
{
	char	str[] = "Hello je tesx";

	if (strchr(str, 'H') != ft_strchr(str, 'H'))
		D_ERROR
	if (strchr(str, 'j') != ft_strchr(str, 'j'))
		D_ERROR
	if (strchr(str, 'x') != ft_strchr(str, 'x'))
		D_ERROR
	if (strchr(str, 'y') != ft_strchr(str, 'y'))
		D_ERROR
	if (strchr(str, 0) != ft_strchr(str, 0))
		D_ERROR
	return (1);
}

int		uf_test_strstr(void)
{
	char	*str = "Hello les genw";

	if (strstr(str, "Hello") != ft_strstr(str, "Hello"))
		D_ERROR
	if (strstr(str, "les") != ft_strstr(str, "les"))
		D_ERROR
	if (strstr(str, "gen") != ft_strstr(str, "gen"))
		D_ERROR
	if (strstr(str, "w") != ft_strstr(str, "w"))
		D_ERROR
	if (strstr(str, "") != ft_strstr(str, ""))
		D_ERROR
	return (1);
}
/*
int		uf_test_strnstr(void)
{
	char	*str = "Hello les genw";
//printf("%s - %s\n",strnstr(str, "Hello", 3), ft_strnstr(str, "Hello", 3));
//printf("%s - %s\n",strnstr(str, "les", 1), ft_strnstr(str, "les", 1));
//printf("%s - %s\n",strnstr(str, "w", 0), ft_strnstr(str, "w", 0));
	if (strnstr(str, "Hello", 3) != ft_strnstr(str, "Hello", 3))
		D_ERROR
	if (strnstr(str, "les", 1) != ft_strnstr(str, "les", 1))
		D_ERROR
	if (strnstr(str, "gen", 2) != ft_strnstr(str, "gen", 2))
		D_ERROR
	if (strnstr(str, "w", 0) != ft_strnstr(str, "w", 0))
		D_ERROR
	if (strnstr(str, "", 3) != ft_strnstr(str, "", 3))
		D_ERROR
	return (1);
}
*/
int	uf_test_strrchr(void)
{
	char	str[] = "Hello je tesx";

	if (strrchr(str, 'H') != ft_strrchr(str, 'H'))
		D_ERROR
	if (strrchr(str, 'j') != ft_strrchr(str, 'j'))
		D_ERROR
	if (strrchr(str, 'x') != ft_strrchr(str, 'x'))
		D_ERROR
	if (strrchr(str, 0) != ft_strrchr(str, 0))
		D_ERROR
	return (1);
}

int		uf_test_strncmp(void)
{
	//rintf("%d - %d\n",strcmp("abcdds", "abc"), ft_strcmp("abcdds", "abc"));
	if (strncmp("abcdds", "abc", 2) != ft_strncmp("abcdds", "abc", 2))
		D_ERROR
	if (strncmp("cba", "abc", 2) != ft_strncmp("cba", "abc", 2))
		D_ERROR
	if (strncmp("abc", "cba", 2) != ft_strncmp("abc", "cba", 2))
		D_ERROR
	if (strncmp("", "", 3) != ft_strncmp("", "", 3))
		D_ERROR
	return (1);
}

int		uf_test_strcmp(void)
{
	//printf("%d - %d\n",strcmp("prout", "fesse"), ft_strcmp("prout", "fesse"));
	if (strcmp("abcsalkj", "abc") != ft_strcmp("abcsalkj", "abc"))
		D_ERROR
	if (strcmp("cba", "abc") != ft_strcmp("cba", "abc"))
		D_ERROR
	if (strcmp("abc", "cba") != ft_strcmp("abc", "cba"))
		D_ERROR
	if (strcmp("", "") != ft_strcmp("", ""))
		D_ERROR
	return (1);
}

int	uf_test_bzero(void)
{
	int		itab[9];
	char	ctab[3];
	char	ctab2[3];
	int		itab2[9];

	itab[0] = 3;
	itab2[0] = 3;
	itab[8] = 3;
	itab2[8] = 3;
	ctab[0] = 3;
	ctab2[0] = 3;
	ctab[2] = 3;
	ctab2[2] = 3;
	ft_bzero(itab, sizeof(itab));
	bzero(itab2, sizeof(itab));
	if (memcmp(itab, itab2, sizeof(itab)) != 0)
		D_ERROR
	ft_bzero(ctab, sizeof(ctab));
	bzero(ctab2, sizeof(ctab));
	if (memcmp(ctab, ctab2, sizeof(ctab)) != 0)
		D_ERROR
	return (1);
}

int	uf_test_memset(void)
{
	int		itab[9];
	char	ctab[3];
	char	ctab2[3];
	int		itab2[9];

	itab[0] = 3;
	itab2[0] = 3;
	itab[8] = 3;
	itab2[8] = 3;
	ctab[0] = 3;
	ctab2[0] = 3;
	ctab[2] = 3;
	ctab2[2] = 3;
	if (ft_memset(itab, 49, sizeof(itab)) != memset(itab, 49, sizeof(itab)))
		D_ERROR
	ft_memset(itab, 49, sizeof(itab));
	memset(itab2, 49, sizeof(itab));
	if (memcmp(itab, itab2, sizeof(itab)) != 0)
		D_ERROR
	ft_memset(ctab, 49, sizeof(ctab));
	memset(ctab2, 49, sizeof(ctab));
	if (memcmp(ctab, ctab2, sizeof(ctab)) != 0)
		D_ERROR
	return (1);
}

int	uf_test_memcpy(void)
{
	int	tab[9];
	int	tab2[9];
	int	cpy[4];

	cpy[0] = 3;
	cpy[1] = 4;
	cpy[2] = 5;
	cpy[3] = 7;
	memset(tab, 0, sizeof(tab));
	memset(tab2, 0, sizeof(tab));
	if (ft_memcpy(tab, cpy, sizeof(cpy)) != memcpy(tab, cpy, sizeof(cpy)))
		D_ERROR
	memset(tab, 0, sizeof(tab));
	memset(tab2, 0, sizeof(tab));
	ft_memcpy(tab2, cpy, sizeof(cpy));
	memcpy(tab, cpy, sizeof(cpy));
	if (memcmp(tab, tab2, sizeof(tab)) != 0)
		D_ERROR
	ft_memcpy(tab2 + 1, cpy, sizeof(cpy));
	memcpy(tab + 1, cpy, sizeof(cpy));
	if (memcmp(tab, tab2, sizeof(tab)) != 0)
		D_ERROR
	return (1);
}
/*
int					uf_test_memcpy(void)
{
	char			ctab[11], ctab2[11], ctab3[11];
	int				itab[11], itab2[11], itab3[11];
	unsigned long	ltab[11], ltab2[11], ltab3[11];
	int				i, j;
	size_t			k;
	void			*temp, *temp2, *temp3;

	printf("\033[33mHC test\033[0m : ");
	memcpy(NULL, NULL, 0);
	ft_memcpy(NULL, NULL, 0);
	k = 0;
	while (k <= sizeof(ltab))
	{
		i = 0;
		while (i < RANDT)
		{
			j = 0;
			while (j < 11)
			{
				ctab[j] = (char)rand();
				ctab2[j] = 0; ctab3[j] = 0;
				itab[j] = rand();
				itab2[j] = 0; itab3[j] = 0;
				ltab[j] = (unsigned long)rand() * LONG;
				ltab2[j] = 0; ltab3[j] = 0;
				j++;
			}
			memcpy(ctab2, ctab, (k < sizeof(ctab)) ? k : sizeof(ctab));
			temp = ft_memcpy(ctab3, ctab, (k < sizeof(ctab)) ? k : sizeof(ctab));
			memcpy(itab2, itab, (k < sizeof(itab)) ? k : sizeof(itab));
			temp2 = ft_memcpy(itab3, itab, (k < sizeof(itab)) ? k : sizeof(itab));
			memcpy(ltab2, ltab, (k < sizeof(ltab)) ? k : sizeof(ltab));
			temp3 = ft_memcpy(ltab3, ltab, (k < sizeof(ltab)) ? k : sizeof(ltab));
			if ((memcmp(itab2, itab3, sizeof(itab)) != 0 || (temp2 != itab3)))
				D_ERROR
			if (memcmp(ctab2, ctab3, sizeof(ctab)) != 0 || temp != ctab3)
				D_ERROR
			if (memcmp(ltab2, ltab3, sizeof(ltab)) != 0 ||( temp3 != ltab3))
				D_ERROR
			++i;
		}
		++k;
	}
	return (1);
}

int					uf_test_memset(void)
{
	char			ctab[11], ctab2[11];
	int				itab[11], itab2[11];
	unsigned long	ltab[11], ltab2[11];
	size_t			i, j, k;
	void			*temp, *temp2;

	printf("\033[33mHC test\033[0m : ");
	memset(NULL, 0, 0);
	ft_memset(NULL, 0, 0);
	k = 0;
	while (k <= sizeof(ltab))
	{
		i = 0;
		while (i < RANDT)
		{
			j = 0;
			while (j < 11)
			{
				ctab[j] = (char)rand();
				itab[j] = rand();
				ltab[j] = (unsigned long)rand() * LONG;
				j++;
			}
			memcpy(ctab2, ctab, sizeof(ctab));
			memcpy(itab2, itab, sizeof(itab));
			memcpy(ltab2, ltab, sizeof(ltab));
			temp = ft_memset(itab, i, (k < sizeof(itab)) ? k : sizeof(itab));
			temp2 = memset(itab2, i, (k < sizeof(itab)) ? k : sizeof(itab));
			if (memcmp(itab, itab2, sizeof(itab)) != 0 || temp != itab || temp2 != itab2)
				D_ERROR
			temp = ft_memset(ctab, i, (k < sizeof(ctab)) ? k : sizeof(ctab));
			temp2 = memset(ctab2, i, (k < sizeof(ctab)) ? k : sizeof(ctab));
			if (memcmp(ctab, ctab2, sizeof(ctab)) != 0 || temp != ctab || temp2 != ctab2)
				D_ERROR
			temp = ft_memset(ltab, i, (k < sizeof(ltab)) ? k : sizeof(ltab));
			temp2 = memset(ltab2, i, (k < sizeof(ltab)) ? k : sizeof(ltab));
			if (memcmp(ltab, ltab2, sizeof(ltab)) != 0 || temp != ltab || temp2 != ltab2)
				D_ERROR
			++i;
		}
		++k;
	}
	return (1);
}

int					uf_test_bzero(void)
{
	char			ctab[11], ctab2[11];
	int				itab[11], itab2[11];
	unsigned long	ltab[11], ltab2[11];
	size_t			i, j;

	printf("\033[33mHC test\033[0m : ");
	i = 0;
	bzero(NULL, 0);
	ft_bzero(NULL, 0);
	while (i < 11)
	{
		j = 0;
		while (j < 11)
		{
			ctab[j] = (char)rand();
			itab[j] = rand();
			ltab[j] = (unsigned long)rand() * LONG;
			j++;
		}
		memcpy(ctab2, ctab, sizeof(ctab));
		memcpy(itab2, itab, sizeof(itab));
		memcpy(ltab2, ltab, sizeof(ltab));
		bzero(ctab2, i);
		ft_bzero(ctab, i);
		if (memcmp(ctab, ctab2, sizeof(ctab)) != 0)
			D_ERROR
		bzero(itab2, i);
		ft_bzero(itab, i);
		if (memcmp(itab, itab2, sizeof(itab)) != 0)
			D_ERROR
		bzero(ltab2, i);
		ft_bzero(ltab, i);
		if (memcmp(ltab, ltab2, sizeof(ltab)) != 0)
			D_ERROR
		++i;
	}
	return (1);
}

int	uf_test_memccpy(void)
{
	char	tab[11] = "Hello boys\0";
	char	tab2[11] = "Hello boys\0";
	char	cpy[7] = "lolleh\0";
printf("%s - %s\n",(char *)ft_memccpy(tab, cpy, 'o', sizeof(cpy)), (char *)memccpy(tab, cpy, 'o', sizeof(cpy)));
	if (ft_memccpy(tab, cpy, 'o', sizeof(cpy)) != memccpy(tab, cpy, 'o', sizeof(cpy)))
		D_ERROR
	memcpy(tab, "Hello", 5);
	ft_memccpy(tab2, cpy, 'o', sizeof(cpy));
	memccpy(tab, cpy, 'o', sizeof(cpy));
	printf("%s - %s\n",(char *)ft_memccpy(tab, cpy, 'o', sizeof(cpy)), (char *)memccpy(tab, cpy, 'o', sizeof(cpy)));

	//if (memcmp(tab, tab2, sizeof(tab)) != 0)
	//	D_ERROR
	ft_memccpy(tab2 + 1, cpy, 7, sizeof(cpy));
	memccpy(tab + 1, cpy, 7, sizeof(cpy));
	printf("%s - %s\n",(char *)ft_memccpy(tab2+1, cpy, 'o', sizeof(cpy)), (char *)memccpy(tab+1, cpy, 'o', sizeof(cpy)));
	printf("%s - %s\n", tab, tab2);
	if (memcmp(tab, tab2, sizeof(tab)) != 0)
		D_ERROR
	return (1);
}
*/

int	uf_test_memccpy(void)
{
	char	tab[11] = "Hello boys\0";
	char	tab2[11] = "Hello boys\0";
	char	cpy[6] = "olleh\0";
printf("%s - %s\n",(char *)ft_memccpy(tab, cpy, 'o', sizeof(cpy)), (char *)memccpy(tab, cpy, 'o', sizeof(cpy)));
	if (ft_memccpy(tab, cpy, 'o', sizeof(cpy)) != memccpy(tab, cpy, 'o', sizeof(cpy)))
		D_ERROR
	memcpy(tab, "Hello", 5);
	ft_memccpy(tab2, cpy, 'o', sizeof(cpy));
	memccpy(tab, cpy, 'o', sizeof(cpy));
	printf("%s - %s\n", tab, tab2);
	//if (memcmp(tab, tab2, sizeof(tab)) != 0)
	//	D_ERROR
	ft_memccpy(tab2 + 1, cpy, 7, sizeof(cpy));
	memccpy(tab + 1, cpy, 7, sizeof(cpy));
	printf("%s - %s\n", tab, tab2);
	if (memcmp(tab, tab2, sizeof(tab)) != 0)
		D_ERROR
	return (1);
}

int	uf_test_strncat(void)
{
	char	dest[50] = {0};
	char	dest2[50] = {0};


	if (strncat(dest, "hello ", 2) != ft_strncat(dest, "hello ", 2))
		D_ERROR
	memset(dest, 0, sizeof(dest));
	strncat(dest, "Hello ", 4);
	ft_strncat(dest2, "Hello ", 4);
	if (strcmp(dest, dest2) != 0)
		D_ERROR
	strncat(dest, "Hello ", 2);
	ft_strncat(dest2, "Hello ", 2);
	if (strcmp(dest, dest2) != 0)
		D_ERROR
	return (1);
}

int	uf_test_strcat(void)
{
	char	dest[50] = {0};
	char	dest2[50] = {0};

	if (strcat(dest, "hello ") != ft_strcat(dest, "hello "))
		D_ERROR
	memset(dest, 0, sizeof(dest));
	strcat(dest, "Hello ");
	ft_strcat(dest2, "Hello ");
	if (strcmp(dest, dest2) != 0)
		D_ERROR
	strcat(dest, "Hello ");
	ft_strcat(dest2, "Hello ");
	if (strcmp(dest, dest2) != 0)
		D_ERROR
	return (1);
}

int	main(void)
{
	int		i;
	t_test	test[D_TEST];

	i = 0;

	uf_add_test(test, "alpha", uf_test_isalpha);
	uf_add_test(test, "digit", uf_test_isdigit);
	uf_add_test(test, "alnum", uf_test_isalnum);
	uf_add_test(test, "isascii", uf_test_isascii);
	uf_add_test(test, "isprint", uf_test_isprint);
	uf_add_test(test, "toupper", uf_test_toupper);
	uf_add_test(test, "tolower", uf_test_tolower);
	uf_add_test(test, "atoi", uf_test_atoi);
  uf_add_test(test, "strchr", uf_test_strchr);
	uf_add_test(test, "strrchr", uf_test_strrchr);
	uf_add_test(test, "strstr", uf_test_strstr);
//	uf_add_test(test, "strnstr", uf_test_strnstr);
	uf_add_test(test, "strcmp", uf_test_strcmp);
	uf_add_test(test, "strncmp", uf_test_strncmp);
	uf_add_test(test, "bzero", uf_test_bzero);
	uf_add_test(test, "memset", uf_test_memset);
	uf_add_test(test, "memcpy", uf_test_memcpy);
	uf_add_test(test, "memccpy", uf_test_memccpy);
	uf_add_test(test, "strcat", uf_test_strcat);
	uf_add_test(test, "strncat", uf_test_strncat);
	while (i < D_TEST && test[i].set == true)
	{
		printf("Test [%s] : ", test[i].name);
		if (test[i].funct() == 0)
			printf("\033[31mFAIL\033[0m\n");
		else
			printf("\033[32mOK\033[0m\n");
		i = i + 1;
	}
	return (0);
}
