/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdouahi <abdouahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:49:31 by abdouahi          #+#    #+#             */
/*   Updated: 2024/10/30 19:57:41 by abdouahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void transform_char1(unsigned int index, char *c)
// {
//     *c += 1;
// }

// int main(void)
// {
//     char s[] = "Hello, World!";
//     ft_striteri(s, &transform_char1);
// 	printf("%s", s);
//     return (0);
// }
