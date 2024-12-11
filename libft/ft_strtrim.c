/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kensei <kensei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 04:42:09 by kensei            #+#    #+#             */
/*   Updated: 2024/12/11 16:29:06 by kensei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	set_len;
	size_t	i;
	size_t	j;	
	size_t	k;
	size_t	start;

	set_len = ft_strlen (set);
	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		if (s1[i] == set[0])
		{
			start = i;
			while (s1[i] == set[j])
			{
				if (set[j] == '\0')
				{
					res = ft_calloc(set_len + 1,sizeof(char *));
					if (!res)
						return (NULL);
					i = start;
					k = 0;
					while (i <= set_len + 1)
					{
						res[k] = s1[i];
						k++;
						i++;
					}
					return (&res[0]);
				}
				i++;
				j++;
			}
		}
		i++;
	}
	return (0);
}
int	main (void)
{
	const char	*str = "Pineapple";
	const char	*trim = "apple";
	const char	*result;

	result = ft_strtrim(str,trim);
	printf ("%s\n", result);
}
