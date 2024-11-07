/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenakamu <kenakamu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:37:54 by kenakamu          #+#    #+#             */
/*   Updated: 2024/11/04 23:12:32 by kenakamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libft.a"
#include <strings.h>

void ft_bzero(void *s1, size_t n)
{
	char *p;
	p = s1;

	while(--n)
	{
		*p = '\0';
		p++;
	}
}
