/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdouahi <abdouahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:09:55 by abdouahi          #+#    #+#             */
/*   Updated: 2024/10/30 10:19:19 by abdouahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	char		*s;
	size_t		i;

	d = (char *)dest;
	s = (char *)src;
	i = 0;
	if (d[i] == '\0' && s[i] == 0)
		return (0);
	if (d < s)
	{
		ft_memcpy(d, s, n);
	}
	else if ((char)&d[i] > (char)&s[i])
	{
		i = n;
		while (i != 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	return (d);
}

// int main () {
//    //char dest_str[] = "oldstring";
//     char src_str[]  = "0123456789aef"; // 01
//     char src_str1[]  = "0123456789aef"; // 
//    //char dest_str1[] = "oldstring";

//    memmove(src_str + 2 , src_str + 4, 5);
//    printf("%s", src_str);
//    printf("\n");
//    ft_memmove(src_str + 2 , src_str + 4, 5);
//    printf("%s", src_str1);
// }