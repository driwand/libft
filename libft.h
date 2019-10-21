/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkssiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 13:01:06 by abkssiba          #+#    #+#             */
/*   Updated: 2019/10/20 12:04:04 by abkssiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct  s_list
{
    void *content;
    struct s_list *next;
}               t_list;

void	*ft_memset(void *b, int c, size_t len);
size_t	ft_strlen(const char *s);
void	ft_bzero(void *s, size_t n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_atoi(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char    *ft_strcat(char *s1, const char *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strncat(char *dest, const char *src, int nb);


char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char    *ft_strtrim(char const *s1, char const *set);
char    *ft_itoa(int n);

t_list  *ft_lstnew(void *content);
int     ft_lstsize(t_list *lst);
void    ft_lstadd_front(t_list **alst, t_list *new);
t_list  *ft_lstlast(t_list *lst);
void    ft_lstadd_back(t_list **alst, t_list *new);
#endif
