/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitrii <dmitrii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 08:00:27 by dmitrii           #+#    #+#             */
/*   Updated: 2024/09/24 15:57:04 by dmitrii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "stddef.h"
# include "stdlib.h"

int		ft_isalpha(int c);
int		ft_strcmp(char *s1, char *s2);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dsize);
void	ft_bzero(void *s, size_t n);
int		ft_atoi(const char *nptr);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcat(char *dst, const char *src, size_t dsize);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*strdup(const char *s);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);

#endif