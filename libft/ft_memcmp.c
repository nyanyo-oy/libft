/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kensei <kensei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 23:05:52 by kenakamu          #+#    #+#             */
/*   Updated: 2024/12/13 00:44:08 by kensei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;

	if (n == 0)
		return (0);
	while (n--)
	{
		c1 = (unsigned char *)s1++;
		c2 = (unsigned char *)s2++;
		if (*c1 != *c2)
			return (s1 - s2);
		if (*c1 == '\0')
			return (0);
	}
	return (0);
}
