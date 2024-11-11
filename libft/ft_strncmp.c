/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenakamu <kenakamu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 23:08:04 by kenakamu          #+#    #+#             */
/*   Updated: 2024/11/11 23:07:16 by kenakamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//wakaran
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 == *s2 && n-- && *s1 && *s2)
	{
		s1++;
		s2++;
		n--;
		if (*s1 != *s2)
			((unsigned char *)s1 - (unsigned char *)s2);
		
			
	}
	
}
