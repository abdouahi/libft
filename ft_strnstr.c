/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdouahi <abdouahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:09:50 by abdouahi          #+#    #+#             */
/*   Updated: 2024/10/27 15:52:51 by abdouahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (haystack[i] != '\0' && needle[i] != '\0' && len > 0)
	{
		while (haystack[i] == needle[k] && needle[k] != '\0')
		{
			k++;
		}
		if (needle[k] == '\0')
		{
			return ((char *)&haystack[i]);
		}
		i++;
		len--;
	}
	return (NULL);
}

// int main()
// {
// 	char *p = "doull";
// 	char g = 'd';
//     char *haystack = "hello my mane is doull";
//     char *needle = 'm';
//     char *location;
// 	int len = strlen(haystack);
//     location = ft_strnstr(haystack,needle, len);
//     if(location == NULL)
//         printf("Can't find '%s' within %d characters of '%s'\n",
//             needle,
//             len,
//             haystack);
//     else
//         printf("Found '%s' within %d characters of '%s'\n",
//             needle,
//             len,
//             haystack);
// 	printf("%s\n", ft_strnstr(p, &g, 5));
// 	printf("%s", strnstr(p, &g, 5));
//     return(0);
// }

// int main(){
// 	char *p = "hello.world";
// 	char *d = ".";

// 	printf("%s", ft_strnstr(p, d, 8));
// }

// int main(){
// 	char *p = "aaabcabcd";
// 	char *d = "aabc";

// 	printf("%s", ft_strnstr(p, "abcd", 9));
// }