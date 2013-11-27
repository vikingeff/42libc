#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

#include "libft.h" /* compile with -I./ */
#define D_ERROR { printf("Error Line %d, Funct %s ", __LINE__ - 1, __func__); return (0); }

#define D_TEST  29

typedef struct  s_test
{
        const	char *name;
        int	(*funct)(void);
        bool	set;
}t_test;

int             uf_test_memalloc_and_del(void)
{
        void    *ret;

        ret = ft_memalloc(4);
        ft_memdel(&ret);
        if (ret != NULL)
                D_ERROR
        ret = ft_memalloc(0);
        if (ret != NULL)
                D_ERROR
        return (1);
}

int             uf_test_tolower(void)
{
        int     i;

        i = 0;
        while (i < 255)
        {
                if (tolower(i) != ft_tolower(i))
                        D_ERROR
                i = i + 1;
        }
        return (1);
}

int             uf_test_toupper(void)
{
        int     i;

        i = 0;
        while (i < 255)
        {
                if (toupper(i) != ft_toupper(i))
                        D_ERROR
                i = i + 1;
        }
        return (1);
}

int             uf_test_isprint(void)
{
        int     i;

        i = 0;
        while (i < 255)
        {
                if (isprint(i) != ft_isprint(i))
                        D_ERROR
                i = i + 1;
        }
        return (1);
}

int             uf_test_isascii(void)
{
        int     i;

        i = 0;
        while (i < 255)
        {
                if (isascii(i) != ft_isascii(i))
                        D_ERROR
                i = i + 1;
        }
        return (1);
}

int             uf_test_isalnum(void)
{
        int     i;

        i = 0;
        while (i < 255)
        {
                if (isalnum(i) != ft_isalnum(i))
                        D_ERROR
                i = i + 1;
        }
        return (1);
}

int             uf_test_isdigit(void)
{
        int     i;

        i = 0;
        while (i < 255)
        {
                if (isdigit(i) != ft_isdigit(i))
                        D_ERROR
                i = i + 1;
        }
        return (1);
}

int             uf_test_isalpha(void)
{
        int     i;

        i = 0;
        while (i < 255)
        {
                if (isalpha(i) != ft_isalpha(i))
                        D_ERROR
                i = i + 1;
        }
        return (1);
}

int             uf_test_atoi(void)
{
        if (atoi("123") != ft_atoi("123"))
                D_ERROR
        if (atoi("-123") != ft_atoi("-123"))
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

int             uf_test_strncmp(void)
{
        if (strncmp("abc", "abc", 2) != ft_strncmp("abc", "abc", 2))
                D_ERROR
        if (strncmp("cba", "abc", 2) != ft_strncmp("cba", "abc", 2))
                D_ERROR
        if (strncmp("abc", "cba", 2) != ft_strncmp("abc", "cba", 2))
                D_ERROR
        if (strncmp("", "", 3) != ft_strncmp("", "", 3))
                D_ERROR
        return (1);
}

int             uf_test_strcmp(void)
{
        if (strcmp("abc", "abc") != ft_strcmp("abc", "abc"))
                D_ERROR
        if (strcmp("cba", "abc") != ft_strcmp("cba", "abc"))
                D_ERROR
        if (strcmp("abc", "cba") != ft_strcmp("abc", "cba"))
                D_ERROR
        if (strcmp("", "") != ft_strcmp("", ""))
                D_ERROR
        return (1);
}

int             uf_test_strnstr(void)
{
        char    *str = "Hello les genw";

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

int             uf_test_strstr(void)
{
        char    *str = "Hello les genw";

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

int     uf_test_strrchr(void)
{
        char    str[] = "Hello je tesx";

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

int     uf_test_strchr(void)
{
        char    str[] = "Hello je tesx";

        if (strchr(str, 'H') != ft_strchr(str, 'H'))
                D_ERROR
        if (strchr(str, 'j') != ft_strchr(str, 'j'))
                D_ERROR
        if (strchr(str, 'x') != ft_strchr(str, 'x'))
                D_ERROR
        if (strchr(str, 0) != ft_strchr(str, 0))
                D_ERROR
        return (1);
}

int     uf_test_strlcat(void)
{
        char    dest[50] = {0};
        char    dest2[50] = {0};


        if (strlcat(dest, "Hello ", 4) != ft_strlcat(dest2, "Hello ", 4))
                D_ERROR
        memset(dest, 0, sizeof(dest));
        memset(dest2, 0, sizeof(dest));
        strlcat(dest, "Hello ", 4);
        ft_strlcat(dest2, "Hello ", 4);
        if (strcmp(dest, dest2) != 0)
                D_ERROR
        strlcat(dest, "Hello ", 1);
        ft_strlcat(dest2, "Hello ", 1);
        if (strcmp(dest, dest2) != 0)
                D_ERROR
        return (1);
}

int     uf_test_strncat(void)
{
        char    dest[50] = {0};
        char    dest2[50] = {0};


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

int     uf_test_strcat(void)
{
        char    dest[50] = {0};
        char    dest2[50] = {0};

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

int     uf_test_strncpy(void)
{
        char    dest[50] = {0};
        char    dest2[50] = {0};

        if (strncpy(dest, "Hello foo", 6) != ft_strncpy(dest, "Hello foo", 6))
                D_ERROR
        strncpy(dest, "Hello foo", 6);
        ft_strncpy(dest2, "Hello foo", 6);
        if (strcmp(dest, dest2) != 0)
                D_ERROR
        strncpy(dest, "Hello", 2);
        ft_strncpy(dest2, "Hello", 2);
        if (strcmp(dest, dest2) != 0)
                D_ERROR
        return (1);
}

int     uf_test_strcpy(void)
{
        char    dest[50] = {0};
        char    dest2[50] = {0};

        if (strcpy(dest, "Hello foo") != ft_strcpy(dest, "Hello foo"))
                D_ERROR
        strcpy(dest, "Hello foo");
        ft_strcpy(dest2, "Hello foo");
        if (strcmp(dest, dest2) != 0)
                D_ERROR
        strcpy(dest, "Hello");
        ft_strcpy(dest2, "Hello");
        if (strcmp(dest, dest2) != 0)
                D_ERROR
        return (1);
}

int     uf_test_strdup(void)
{
        char    *ret1;
        char    *ret2;

        ret1 = strdup("");
        ret2 = strdup("");
        if (strcmp(ret1, ret2) != 0)
                D_ERROR
        free(ret1);
        free(ret2);
        ret1 = strdup("hello");
        ret2 = strdup("hello");
        if (strcmp(ret1, ret2) != 0)
                D_ERROR
        free(ret1);
        free(ret2);
        return (1);
}

int     uf_test_strlen(void)
{
        if (strlen("") != ft_strlen(""))
                D_ERROR
        if (strlen("abc") != ft_strlen("abc"))
                D_ERROR
        if (strlen("a") != ft_strlen("a"))
                D_ERROR
        return (1);
}

int     uf_test_memmove(void)
{
        char    str[] = "memmove can be very useful......";
        char    str2[] = "memmove can be very useful......";
        char    str3[] = "memmove can be very useful......";
        char    str4[] = "memmove can be very useful......";

        if (strcmp(memmove(str + 10, str + 5, 10), ft_memmove(str2 + 10, str2 + 5, 10)) != 0)
                D_ERROR
        if (strcmp(memmove(str3 + 5, str3 + 10, 10), ft_memmove(str4 + 5, str4 + 10, 10)) != 0)
                D_ERROR
        return (1);
}

int     uf_test_memchr(void)
{
        char    tab[11] = "Hello boys\0";
        char    tab2[11] = "Hello boys\0";
        char    cpy[6] = "olleh\0";

        if (ft_memccpy(tab, cpy, 'o', sizeof(cpy)) != memccpy(tab, cpy, 'o', sizeof(cpy)))
                D_ERROR
        memcpy(tab, "Hello", 5);
        ft_memccpy(tab2, cpy, 'o', sizeof(cpy));
        memccpy(tab, cpy, 'o', sizeof(cpy));
        if (memchr(tab, 'y', sizeof(tab)) != ft_memchr(tab, 'y', sizeof(tab)))
                D_ERROR
        ft_memccpy(tab2 + 1, cpy, 7, sizeof(cpy));
        memccpy(tab + 1, cpy, 7, sizeof(cpy));
        if (memchr(tab, 'h', sizeof(tab)) != ft_memchr(tab, 'h', sizeof(tab)))
                D_ERROR
        return (1);
}

int     uf_test_memcmp(void)
{
        char    tab[11] = "Hello boys\0";
        char    tab2[11] = "Hello boys\0";
        char    cpy[6] = "olleh\0";

        if (ft_memccpy(tab, cpy, 'o', sizeof(cpy)) != memccpy(tab, cpy, 'o', sizeof(cpy)))
                D_ERROR
        memcpy(tab, "Hello", 5);
        ft_memccpy(tab2, cpy, 'o', sizeof(cpy));
        memccpy(tab, cpy, 'o', sizeof(cpy));
        if (memcmp(tab, tab2, sizeof(tab)) != ft_memcmp(tab, tab2, sizeof(tab)))
                D_ERROR
        ft_memccpy(tab2 + 1, cpy, 7, sizeof(cpy));
        memccpy(tab + 1, cpy, 7, sizeof(cpy));
        if (memcmp(tab, tab2, sizeof(tab)) != ft_memcmp(tab, tab2, sizeof(tab)))
                D_ERROR
        return (1);
}

int     uf_test_memccpy(void)
{
        char    tab[11] = "Hello boys\0";
        char    tab2[11] = "Hello boys\0";
        char    cpy[6] = "olleh\0";

        if (ft_memccpy(tab, cpy, 'o', sizeof(cpy)) != memccpy(tab, cpy, 'o', sizeof(cpy)))
                D_ERROR
        memcpy(tab, "Hello", 5);
        ft_memccpy(tab2, cpy, 'o', sizeof(cpy));
        memccpy(tab, cpy, 'o', sizeof(cpy));
        if (memcmp(tab, tab2, sizeof(tab)) != 0)
                D_ERROR
        ft_memccpy(tab2 + 1, cpy, 7, sizeof(cpy));
        memccpy(tab + 1, cpy, 7, sizeof(cpy));
        if (memcmp(tab, tab2, sizeof(tab)) != 0)
                D_ERROR
        return (1);
}

int     uf_test_memcpy(void)
{
        int     tab[9];
        int     tab2[9];
        int     cpy[4];

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

int     uf_test_memset(void)
{
        int             itab[9];
        char    ctab[3];
        char    ctab2[3];
        int             itab2[9];

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

int     uf_test_bzero(void)
{
        int             itab[9];
        char    ctab[3];
        char    ctab2[3];
        int             itab2[9];

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

void    uf_add_test(t_test *test, const char *name, int (*funct)(void))
{
        static int      i = 0;

        test[i].name = name;
        test[i].funct = funct;
        test[i].set = true;
        i = i + 1;
}

int             main(int argc, const char **argv)
{
        int             i;
        t_test  test[D_TEST];

        i = 0;
        memset(test, 0, D_TEST);
        uf_add_test(test, "memset", uf_test_memset);
        uf_add_test(test, "bzero", uf_test_bzero);
        uf_add_test(test, "memcpy", uf_test_memcpy);
        uf_add_test(test, "memccpy", uf_test_memccpy);
        uf_add_test(test, "memmove", uf_test_memmove);
        uf_add_test(test, "memchr", uf_test_memchr);
        uf_add_test(test, "memcmp", uf_test_memcmp);
        uf_add_test(test, "strlen", uf_test_strlen);
        uf_add_test(test, "strdup", uf_test_strdup);
        uf_add_test(test, "strcpy", uf_test_strcpy);
        uf_add_test(test, "strncpy", uf_test_strncpy);
        uf_add_test(test, "strcat", uf_test_strcat);
        uf_add_test(test, "strncat", uf_test_strncat);
        uf_add_test(test, "strlcat", uf_test_strlcat);
        uf_add_test(test, "strchr", uf_test_strchr);
        uf_add_test(test, "strrchr", uf_test_strrchr);
        uf_add_test(test, "strstr", uf_test_strstr);
        uf_add_test(test, "strnstr", uf_test_strnstr);
        uf_add_test(test, "strcmp", uf_test_strcmp);
        uf_add_test(test, "strncmp", uf_test_strncmp);
        uf_add_test(test, "atoi", uf_test_atoi);
        uf_add_test(test, "alpha", uf_test_isalpha);
        uf_add_test(test, "digit", uf_test_isdigit);
        uf_add_test(test, "alnum", uf_test_isalnum);
        uf_add_test(test, "isascii", uf_test_isascii);
        uf_add_test(test, "isprint", uf_test_isprint);
        uf_add_test(test, "toupper", uf_test_toupper);
        uf_add_test(test, "tolower", uf_test_tolower);
        uf_add_test(test, "memalloc_del", uf_test_memalloc_and_del);
        while (i < D_TEST && test[i].set == true)
        {
                printf("Test [%s] : ", test[i].name);
                if (test[i].funct() == 0)
                        printf("\033[31mFAIL\033[0m\n");
                else
                        printf("\033[32mOK\033[0m\n");
                i = i + 1;
        }
        (void)argc;
        (void)argv;
        return (0);
}
