/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenakamu <kenakamu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:50:32 by kensei            #+#    #+#             */
/*   Updated: 2024/11/04 23:12:08 by kenakamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libft.a"
#include <string.h>
size_t ft_strlen(const char *str)
{
	const char	*s = str;
	while(*s)
		s++;
	return(s - str);
}
#include <stdio.h>
int main(void)
{
	char str[6] = "Hello";
	printf("%zu\n", ft_strlen(&str[1]));
}