/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kensei <kensei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:23:43 by kenakamu          #+#    #+#             */
/*   Updated: 2024/12/13 00:56:40 by kensei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest0, const void *src0, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;

	dest = (unsigned char *)dest0;
	src = (unsigned char *)src0;
	if (src < dest && dest < src + n)
	{
		src += n;
		dest += n;
		while (n--)
		{
			*(--dest) = *(--src);
		}
	}
	else
	{
		while (n--)
		{
			*dest++ = *src++;
		}
	}
	return (dest0);
}
//後ろからコピー
//   45678
//12345