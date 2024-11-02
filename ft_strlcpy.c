/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenakamu <kenakamu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 21:25:32 by kenakamu          #+#    #+#             */
/*   Updated: 2024/11/02 22:56:14 by kenakamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char *d = dst;
	char const *s = src;
	size_t n = size;
	
	if(n != 0)
	{
		while(--n)
		{
			*d = *s;
			d++;
			s++;
		}
	}
	if(n == 0)
	{
		*d = '\0';
		while(*s)
			s++;
	}
	return(src - s - 1);
}
