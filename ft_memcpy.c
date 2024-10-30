/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdouahi <abdouahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:09:47 by abdouahi          #+#    #+#             */
/*   Updated: 2024/10/25 14:14:25 by abdouahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = (char *) dst;
	s = (const char *) src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

// int main ()
// {
//    const char src[50] = "";
//    const char src1[50] = "";
//    char dest1[50] = "guhwgsjhasghouqs";
//    char dest[50] = "guhwgsjhasghouqs";
//    ft_memcpy(dest,src, 4);
//    printf("Before memcpy dest = %s\n", dest);
//    memcpy(dest1, src1, 4);
//    printf("After memcpy dest1 = %s\n", dest1);
//    return(0);
// }