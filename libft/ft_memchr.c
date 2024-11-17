/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenakamu <kenakamu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 23:17:26 by kenakamu          #+#    #+#             */
/*   Updated: 2024/11/17 02:28:48 by kenakamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str = (unsigned char *)s;
	unsigned char chr = (unsigned char)c;

	while (n--)
	{
		if (*str == chr)
		{
			return ((void*)str);
		}
		str++;
	}
	return (0);
}
