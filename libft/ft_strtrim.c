/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kensei <kensei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 04:42:09 by kensei            #+#    #+#             */
/*   Updated: 2024/12/11 18:24:49 by kensei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	
	if (!s1 ||!set)
		return (NULL);
	s1 = (char *)s1 + ft_strlen(s1);
	while (s1 < s2 && ft_strchr(set,))
}
	
int	main (void)
{
	const char	*str = "Pineapple";
	const char	*trim = "apple";
	const char	*result;

	result = ft_strtrim(str,trim);
	printf ("%s\n", result);
}
