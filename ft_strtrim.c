/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdouahi <abdouahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:44:32 by abdouahi          #+#    #+#             */
/*   Updated: 2024/10/30 12:42:40 by abdouahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check1(char const *s1, char const *s2)
{
	size_t	i;
	size_t	y;
	size_t	f;

	i = 0;
	y = 0;
	f = 0;
	while (s1[i] != '\0')
	{
		y = 0;
		while (s2[y])
		{
			if (s1[i] == s2[y])
			{
				f++;
				break ;
			}
			y++;
		}
		if (s1[i] != s2[y])
			break ;
		i++;
	}
	return (f);
}

int	check2(char const *s1, char const *s2)
{
	size_t	i;
	size_t	y;
	size_t	f;

	y = 0;
	f = 0;
	i = ft_strlen(s1);
	while (i > 0)
	{
		y = 0;
		while (s2[y])
		{
			if (s1[i] == s2[y])
			{
				f++;
				break ;
			}
			y++;
		}
		if (s1[i] != s2[y])
			break ;
		i--;
	}
	return (f);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	f;
	size_t	len;
	size_t	aloc;
	char	*p;

	f = check1(s1, set);
	len = check2(s1, set);
	aloc = ft_strlen(s1) - f - len;
	if (s1[0] == '\0' && set[0] == '\0')
		return (ft_strdup(""));
	if (ft_strlen(s1) == f)
		return (ft_strdup(""));
	p = (char *) malloc (aloc + 1 * sizeof(char));
	if (!p)
		return (NULL);
	ft_strlcpy(p, s1 + f, aloc);
	p[aloc + 1] = '\0';
	return (p);
}

// int main(){
// 	char *p = "abc hello abc world abc";
// 	char *u = "abc ";
// 	size_t i = 0;
// 	char *str = ft_strtrim(p, u);
// 	// ft_memset(str,'5',sizeof(str));
// 	for (size_t i = 0; i < strlen(p); i++)
// 	{
// 		if(p[i] != '\0')
// 			printf("%c",str[i]);
// 		else
// 			printf("0");
// 	}
// }
// // "abbhelloabc"
// //  "abc"
