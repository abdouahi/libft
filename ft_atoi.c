/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdouahi <abdouahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:10:04 by abdouahi          #+#    #+#             */
/*   Updated: 2024/10/30 15:52:44 by abdouahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	handle_over(long r, int digit, int s)
{
	if (r > (LONG_MAX - digit) / 10)
	{
		if (s == 1)
			return (-1);
		else
			return (0);
	}
	return (1);
}

int	ft_atoi(const char *ptr)
{
	int		i;
	int		s;
	long	r;

	i = 0;
	s = 1;
	r = 0;
	while (ptr[i] == ' ' || (ptr[i] >= 9 && ptr[i] <= 13))
		i++;
	if (ptr[i] == '-')
	{
		s = -1;
		i++;
	}
	else if (ptr[i] == '+')
		i++;
	while (ptr[i] && ft_isdigit(ptr[i]))
	{
		if (handle_over(r, ptr[i] - '0', s) != 1)
			return (handle_over(r, ptr[i] - '0', s));
		r = r * 10 + ptr[i] - '0';
		i++;
	}
	return (s * r);
}

// int main(){
// 	printf("%d", ft_atoi("-9223372036858"));
// 	printf("\n");
// 	printf("%d", atoi("-9223372036858"));

// }