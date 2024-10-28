/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenakamu <kenakamu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:57:43 by kenakamu          #+#    #+#             */
/*   Updated: 2024/10/28 17:23:04 by kenakamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memset(void *s1, int c, size_t n)
{
	char *p;
	p = s1;
	
	while(--n)
	{
		*p = c;
		p++;
	}
	return(s1);
}
#include <stdio.h>
int main(void)
{
	//char str[20];
	//size_t an;

	//printf("%d"memset(str,'B',sizeof(as1) - 1);
	
	   char str[20];
    ft_memset(str, 'A', sizeof(str) - 1);  // 最後の1バイトは\0用に残すにゃ
    str[sizeof(str) - 1] = '\0';  // 文字列の終端を設定するにゃ
    printf("例1: %s\n", str);
}
