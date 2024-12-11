/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kensei <kensei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:50:32 by kensei            #+#    #+#             */
/*   Updated: 2024/12/11 06:37:55 by kensei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	const char	*s = str;

	while (*s++)
		;
	return (s - str);
}
//int main(void)
//{
//	char str[6] = "Hello";
//	printf("%zu\n", ft_strlen(&str[1]));
//}
/*((s - str + 1) - 1) <-minus1'\0' */