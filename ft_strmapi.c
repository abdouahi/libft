/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdouahi <abdouahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:56:11 by abdouahi          #+#    #+#             */
/*   Updated: 2024/10/30 19:03:57 by abdouahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*p;
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	p = (char *)malloc(i + 1 * sizeof(char));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		p[i] = (*f)(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
// char transform_char(unsigned int index, char c)
// {
//     return c + 1;
// }

// int main(void)
// {
//     char test_str[] = "abdo";

//     char *result = ft_strmapi(test_str, transform_char);
//     printf("%s\n", result);
//     free(result);
//     return 0;
// }
