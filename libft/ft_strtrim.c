/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kensei <kensei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 04:42:09 by kensei            #+#    #+#             */
/*   Updated: 2024/12/13 23:17:56 by kensei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	const char	*head = s1;
	const char	*tail;
	size_t		len;
	char		*res;
	
	
	if (!s1 ||!set)
		return (NULL);
	tail = s1 + ft_strlen(s1) - 1;
	while (*head && ft_strchr(set, *head))
		head++;
	while (tail >= head && ft_strchr(set, *tail))
		tail--;
	len = (tail - head) + 1;
	res = (char *)ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (NULL);
	ft_strlcpy(res, head, len + 1);
	res[len] = '\0';
	return (res);
}
	
int	main (void)
{
	const char	*str = "Pineapple";
	const char	*trim = "apple";
	char	*result;

	result = ft_strtrim(str,trim);
	printf ("%s\n", result);
	free (result);
}
