/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 09:29:09 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/09/28 16:12:10 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>

// PART 1 - "is" functions
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

// PART 1 - "str" functions
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strdup(const char *str);
char	*ft_strnstr(const char *str, const char *substr, size_t len);

// PART 1 - "mem" functions
void	*ft_memset(void *str, int byte, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);

// PART 1 - other functions
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *str);
void	ft_bzero(void *str, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);

// PART 2 - "str" functions
char	*ft_substr(char const *str, unsigned int start, size_t len);
char	*ft_strjoin(const char *str1, const char *str2);
char	*ft_strtrim(char const *str1, char const *set);
char	*ft_strmapi(char const *str, char (*f)(unsigned int, char));
//void	ft_striteri(char *str, void (*f)(unsigned int, char *));

// PART 2 - "put" functions
//void	ft_putchar_fd(char c, int fd);
//void	ft_putstr_fd(char c, int fd);
//void	ft_putendl_fd(char *str, int fd);
//void	ft_putnbr_fd(int n, int fd);

// PART 2 - other functions
//char	*ft_itoa(int n);
//char	**ft_split(char const *str, char c);

#endif