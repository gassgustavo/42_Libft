/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 09:29:09 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/09/27 17:10:52 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h> // to use write function
#include <stdlib.h> // to use malloc and free functions
#include <string.h> // to access size_t and NULL

int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);

int     ft_toupper(int c);
int     ft_tolower(int c);

int     ft_atoi(const char *str);

size_t  ft_strlen(const char *str);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
int     ft_strncmp(const char *str1, const char *str2, size_t n);
char    *ft_strchr(const char *str, int c);
char    *ft_strrchr(const char *str, int c);
char    *ft_strdup(const char *str);
char    *ft_strnstr(const char *str, const char *substr, size_t len);

void    *ft_bzero(void *str, size_t n);
void    *ft_calloc(size_t nmemb, size_t size);

void    *ft_memset(void *str, int byte, size_t n);

#endif