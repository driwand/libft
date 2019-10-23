/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkssiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 13:03:04 by abkssiba          #+#    #+#             */
/*   Updated: 2019/10/22 13:03:06 by abkssiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char **ft_get_arr(char const *str, char c)
{
        char **arr;
        int count;
        int i;
        int j;

        j = 0;
        i = 0;
        count = 0;
        while (str[i] != '\0')
        {
                j = i;
                while (str[j] != c && str[j] != '\0')
                        j++;
                if (j > i)
                {
                        //printf("%d %d\n",i , j);
                        count++;
                        i = j - 1;
                }
                i++;
        }
        //printf("%d",count);
        arr = (char**)malloc((count + 1) * sizeof(char*));
        return (arr);
}

void    ft_print_split(char **str)
{
        int i;
        int j;

        j = 0;
        i = 0;
       
        while (str[i])
        {
                printf("%s\n", str[i]);
                i++;
        }
}

char **ft_split(char const *s, char c)
{
        char **str;
        int count;
        int i;
        int j;

        if (!s)
                return (NULL);
        str = ft_get_arr(s, c);
        if (!str)
                return (NULL);
        j = 0;
        i = 0;
        count = 0;
        while (s[i] != '\0')
        {
                j = i;
                while (s[j] != c && s[j] != '\0')
                        j++;
                if (j > i)
                {
                        str[count] = (char *)malloc((j - i + 1) * sizeof(char));
                        ft_strlcpy(str[count], s + i, j - i + 1);
                        i = j - 1;
                        count++;
                }
                i++;
        }
        str[count] = 0;
        //ft_print_split(str);
        return (str);
}
/*
int main()
{
        ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus              .                          Suspendisse", '\0');
}*/