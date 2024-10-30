/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdouahi <abdouahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:09:16 by abdouahi          #+#    #+#             */
/*   Updated: 2024/10/28 10:57:26 by abdouahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int search_str)
{
	unsigned char	*p;
	char			b;
	size_t			f;

	p = (unsigned char *) str;
	b = (char ) search_str;
	f = 0;
	while (*p != 0)
	{
		if (*p == b)
			return ((void *) p);
		p++;
	}
	if (*p == b)
		return ((void *) p);
	return (NULL);
}

// int main(){
// 	//test num 1
// 	const char *str = "doul.cod.ing";
// 	const char d = '.';
// 	int i = strlen(str);
// 	printf("%s\n", ft_strchr(str, d));
// 	//test num 2
// 	char *ret;
// 	ret = ft_strchr(str, d);
// 	printf("String after |%c| is - |%s|\n", d, ret);

// 	printf("\n");

// 	const char *s = "example string";  
//     printf("%s\n", ft_strchr(s, 'z') == 0 ? "Not found" : "Found");

//     const char *s1 = "example string";
//     printf("%s\n", strchr(s1, 'z') == 0 ? "Not found" : "Found");

//     return 0;
// }
