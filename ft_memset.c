/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdouahi <abdouahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:09:32 by abdouahi          #+#    #+#             */
/*   Updated: 2024/10/29 19:19:08 by abdouahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*p;
	char			w;
	size_t			i;

	p = (unsigned char *) str;
	w = (char) c;
	i = 0;
	while (n > i)
	{
		p[i] = w;
		i++;
	}
	return ((void *)p);
}

// int main(){
// 	// Test num 1
// 	char str[50];
// 	strcpy(str, "Welcome to Tutorialspoint");
// 	printf("%s\n", ft_memset(str, '#', 3));
// 	printf("%s\n", memset(str, '#', 3));

// 	// Test num 2
// 	int arr[7] = {1, 8, 6, 4, 2, 1 ,0};
// 	ft_memset(arr, 0, 16);
// 	for (int i = 0; i < 7; i++) {
// 		printf("%d", arr[i]);
// 	}
// 	printf("\n");

// 	return 0;
// }
