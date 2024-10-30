/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdouahi <abdouahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:09:38 by abdouahi          #+#    #+#             */
/*   Updated: 2024/10/25 18:19:26 by abdouahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	char			b;

	p = (unsigned char *) s;
	b = (char ) c;
	while (n--)
	{
		if (*p == b)
			return ((void *) p);
		p++;
	}
	return (NULL);
}

// int main(){
// 	//test num 1
// 	const char *str = "doul.coding";
// 	const char d = '.';
// 	int i = strlen(str);
// 	printf("%s\n", ft_memchr(str, d, i));
// 	//test num 2
// 	char *ret;
// 	ret = memchr(str, d, i);
// 	printf("String after |%c| is - |%s|\n", d, ret);
// }