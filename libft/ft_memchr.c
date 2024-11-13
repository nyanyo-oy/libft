/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenakamu <kenakamu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 23:17:26 by kenakamu          #+#    #+#             */
/*   Updated: 2024/11/13 22:01:58 by kenakamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char *str = (unsigned char)s;
	while(*str++ && n--)
	{
		if (s == c)
		{
			return (*str);
		}
	}
	return (0);
}
