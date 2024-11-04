/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenakamu <kenakamu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:23:43 by kenakamu          #+#    #+#             */
/*   Updated: 2024/11/04 23:12:22 by kenakamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

#include "libft.a"
#include <string.h>

void *ft_memmove(void *dest0, const void *src0, size_t n)
{
	char *dest;
	char const *src = src0;
	
	dest = dest0;
	if(src < dest)
	{
		src += n;
		dest += n;
		while(--n)
		{
			*dest = *src;
			dest--;
			src--;
		}
		
	}
	else if(src != dest)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return(dest0);
}
