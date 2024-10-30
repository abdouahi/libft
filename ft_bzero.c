/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdouahi <abdouahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:09:43 by abdouahi          #+#    #+#             */
/*   Updated: 2024/10/30 10:19:50 by abdouahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n != 0)
	{
		*p++ = '\0';
		n--;
	}
}

// int main(){
// 	//test num 0;
// 	char sw[] = "hello";
// 	int len = strlen(sw);
// 	ft_bzero(sw, 4);
// 	for (size_t i = 0; i < len; i++)
// 	{
// 		if(sw[i] == '\0')
// 			printf("0");
// 		else
// 			printf("%c", sw[i]);
// 	}

// 	printf("\n");
// 	//test num 1
// 	char qw[] = "13fifabto234";
// 	int len1 = strlen(qw);
// 	ft_bzero(qw + 2, 2);
// 	for (size_t i = 0; i < len1; i++)
// 	{
// 		if(qw[i] == '\0')
// 			printf("0");
// 		else
// 			printf("%c", qw[i]);
// 	}
// 	return 0;
// }
