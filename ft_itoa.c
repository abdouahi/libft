/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdouahi <abdouahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:56:25 by abdouahi          #+#    #+#             */
/*   Updated: 2024/10/29 19:25:50 by abdouahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_n(int n)
{
	int		len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	check(int src)
{
	if (src > INT_MIN)
		return (-1);
	else
		return (0);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	int		sign;

	len = len_n(n);
	sign = 0;
	check(n);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (n < 0)
	{
		sign = 1;
		n = -n;
		res[0] = '-';
	}
	if (!res)
		return (free(res), NULL);
	res[len] = '\0';
	if (n == 0)
		res[0] = '0';
	while (n > 0)
	{
		res[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (res);
}
