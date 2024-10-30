/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdouahi <abdouahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:19:21 by abdouahi          #+#    #+#             */
/*   Updated: 2024/10/29 09:27:34 by abdouahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (s == 0)
		return (NULL);
	if (start > strlen(s))
		return (strdup(""));
	if (len > strlen(s + start))
		len = strlen(s + start);
	str = malloc(len + 1 * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}

// int main() {
//     const char *str = "Hello, World!";

//     char *substr1 = ft_substr(str, 7, 5);
//     char *substr2 = ft_substr(str, 0, 5); 
//     char *substr3 = ft_substr(str, 0, 20);
//     char *substr4 = ft_substr(str, 13, 5); 
//     char *substr5 = ft_substr(NULL, 0, 5);

//     printf("Substring 1: '%s'\n", substr1);
//     printf("Substring 2: '%s'\n", substr2);
//     printf("Substring 3: '%s'\n", substr3);
//     printf("Substring 4: '%s'\n", substr4);
//     printf("Substring 5: '%s'\n", substr5 ? substr5 : "NULL");

//     free(substr1);
//     free(substr2);
//     free(substr3);
//     free(substr4);
//     free(substr5);

//     return 0;
// }