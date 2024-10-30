/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdouahi <abdouahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:09:13 by abdouahi          #+#    #+#             */
/*   Updated: 2024/10/25 14:32:44 by abdouahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

// int main(){
// 	char p[2] = "bu";
// 	int len = strlen(p);
// 	for (size_t i = 0; i < len; i++)
// 	{
// 		printf("%c", ft_tolower(p[i]));
// 	}
// }
