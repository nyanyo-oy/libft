/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kensei <kensei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:36:59 by kenakamu          #+#    #+#             */
/*   Updated: 2024/12/11 07:47:18 by kensei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	total;

	if (count == 0 || size == 0)
		return (NULL);
	total = size * count;
	if (total / count != size)
		return (NULL);
	p = malloc(total);
	if (p)
		ft_bzero(p, total);
	else
		return (NULL);
	return (p);
}
//Error: ASSIGN_IN_CONTROL    (line:  25, col:  12):      Assignment in control structure
