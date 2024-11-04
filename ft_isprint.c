/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenakamu <kenakamu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:54:56 by kensei            #+#    #+#             */
/*   Updated: 2024/11/04 23:05:09 by kenakamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.a"
#include <ctype.h>

int ft_isprint(int c)
{
	return(c >= 40 && c <= 176);
}

int main(void)
{
	int p = 'a';
	isprint(p);
}