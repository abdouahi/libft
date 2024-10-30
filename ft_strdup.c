/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdouahi <abdouahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:10:12 by abdouahi          #+#    #+#             */
/*   Updated: 2024/10/30 14:21:02 by abdouahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dup;

	len = 0;
	i = 0;
	while (src[len])
	{
		len++;
	}
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (dup == 0)
	{
		return (0);
	}
	while (i <= len)
	{
		dup[i] = src[i];
		i++;
	}
	return (dup);
}

// int main() {
//    char *str = "Helloworld";
//    char *result;
//    result = ft_strdup(str);
//    printf("The string : %s", result);
//    return 0;
// }