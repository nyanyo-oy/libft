/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenakamu <kenakamu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:36:59 by kenakamu          #+#    #+#             */
/*   Updated: 2024/11/25 17:07:12 by kenakamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	total;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total = size * nmemb;
	if (total / nmemb != size)
		return (NULL);
	if ((p = malloc(total)))
		ft_bzero(p, total);
	return (p);
}
//Error: ASSIGN_IN_CONTROL    (line:  25, col:  12):      Assignment in control structure
