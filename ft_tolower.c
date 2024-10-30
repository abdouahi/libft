/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdouahi <abdouahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:09:52 by abdouahi          #+#    #+#             */
/*   Updated: 2024/10/25 12:13:32 by abdouahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

// int main(){
// 	char p[] = "OY";
// 	int len = strlen(p);
// 	for (size_t i = 0; i < len; i++)
// 	{
// 		printf("%c", ft_tolower(p[i]));
// 	}
// }