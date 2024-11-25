/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenakamu <kenakamu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:05:53 by kenakamu          #+#    #+#             */
/*   Updated: 2024/11/25 15:54:39 by kenakamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	size_t size;
	char	*dest;

	size = strlen(s) + 1;
	dest = malloc(size);
	if (dest)
		(void)ft_strlcpy(dest, s, size);
	return (dest);
}

