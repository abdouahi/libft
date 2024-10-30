/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdouahi <abdouahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:10:06 by abdouahi          #+#    #+#             */
/*   Updated: 2024/10/25 16:32:43 by abdouahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;

	d_len = strlen(dst);
	s_len = strlen(src);
	if (d_len >= dstsize)
	{
		return (dstsize + s_len);
	}
	if (d_len + s_len + 1 <= dstsize)
	{
		strcat(dst, src);
	}
	else
	{
		strncat(dst, src, dstsize - d_len - 1);
	}
	return (d_len + s_len);
}

// int main()
// {
//     char first[] = "This is ";
//     char last[] = "a potentially long string";
//     int r;
//     int size = 16;
//     char buffer[size];
//     r = ft_strlcat(buffer,last,size);
//     puts(buffer);
//     printf("Value returned: %d\n",r);
//     if( r > size )
//         puts("String truncated");
//     else
//         puts("String was fully copied");
//     return(0);
// }