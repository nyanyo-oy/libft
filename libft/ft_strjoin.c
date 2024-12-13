/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kensei <kensei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 22:42:14 by kenakamu          #+#    #+#             */
/*   Updated: 2024/12/13 00:47:57 by kensei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	char	*result;

	dst = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!dst)
		return (NULL);
	result = dst;
	while (*s1 != '\0')
	{
		*dst = *s1;
		s1++;
		dst++;
	}
	while (*s2 != '\0')
	{
		*dst = *s2;
		s2++;
		dst++;
	}
	if (*s2 == '\0')
		*dst = '\0';
	return (result);
}
