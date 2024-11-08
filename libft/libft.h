/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenakamu <kenakamu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:16:07 by kenakamu          #+#    #+#             */
/*   Updated: 2024/11/08 14:16:11 by kenakamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H_
# define LIBFT_H_

# include <stdlib.h>
# include <unistd.h>

# include <stdio.h>

//
void 				ft_bzero(void *s1, size_t n);
int 				ft_isalnum(int c);
int					ft_isalpha(int c);
int 				ft_isascii(int c);
int 				ft_isdigit(int c);
int 				ft_isprint(int c);
//
//
//
void 				*ft_memmove(void *dest0, const void *src0, size_t n);
void 				*ft_memset(void *s1, int c, size_t n);
//
size_t				ft_strlen(const char *str);
size_t				ft_strlcat(char	*dst, const char *src, size_t size);
//
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
size_t 				ft_strlen(const char *str);
//
//
//
//
//
//
#endif 
