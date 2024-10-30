/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdouahi <abdouahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:27:57 by abdouahi          #+#    #+#             */
/*   Updated: 2024/10/29 09:21:34 by abdouahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	r = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1 * sizeof(char));
	if (!r)
		return (NULL);
	while (s1[i])
	{
		r[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (s2[i])
	{
		r[j] = s2[i];
		j++;
		i++;
	}
	r[j] = '\0';
	return (r);
}

// int main(){
// 	// 1
// 	char *s1 = "doull ";
// 	char *s2 = "dd";
// 	printf("test 1 :%s", ft_strjoin(s1, s2));
// 	printf("\n");
// 	// 2
// 	char *s3 = "";
// 	char *s4 = "hey";
// 	printf("test 2 :%s", ft_strjoin(s3, s4));
// 	printf("\n");
// 	// 3
// 	char *s5 = "";
// 	char *s6 = "";
// 	printf("test 3 :%s", ft_strjoin(s5, s6));

// }