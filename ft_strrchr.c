/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdouahi <abdouahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:09:24 by abdouahi          #+#    #+#             */
/*   Updated: 2024/10/30 18:14:39 by abdouahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*p;
	char		b;
	size_t		i;

	p = (const char *) str;
	b = (char ) c;
	i = ft_strlen(p);
	while (i > 0)
	{
		if (b == '\0')
			return ((char *) &p[i]);
		if (p[i] == b)
			return ((char *) &p[i]);
		i--;
	}
	return (NULL);
}

// int main () {
// 	// test num 1
//    const char str[] = ".https://www.tutorialspoint.com.lol";
//    const char ch = '.';
//    char *ret;
//    //ret = ft_strrchr(str, ch);
//    printf("%s", strrchr(str, ch));
//    //printf("String after |%c| is - |%s|\n", ch, ret);
//    printf("\n");
//    printf("%d", ft_strrchr(str, 't') == str);
//    return(0);
// }