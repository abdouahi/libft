/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdouahi <abdouahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:11:44 by abdouahi          #+#    #+#             */
/*   Updated: 2024/10/30 14:51:28 by abdouahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
// #include <limits.h>
// #include <stdio.h>
// #include <libc.h>
// #include <stdlib.h>

// int handle(const char **str)
// {
//     int s = 1;

//     while (**str == ' ' || (**str >= 9 && **str <= 13))
//         (*str)++;
//     if (**str == '-')
//     {
//         s = -1;
//         (*str)++;
//     }
//     else if (**str == '+')
//     {
//         (*str)++;
//     }
//     return s;
// }

// int ft_atoi(const char *str)
// {
//     long long r = 0;
//     int s = handle(&str);

//     while (*str >= '0' && *str <= '9' && str)
//     {
//         if (r > (LONG_MAX - (*str - '0')) / 10)
//         {
// 			if(s == 1)
// 				return -1;
// 			else
// 				return 0;
//         }
//         r = r * 10 + (*str - '0');
//         str++;
//     }
//     return r * s;
// }

// int main()
// {
//     printf("%d\n", ft_atoi("9223372053536854775809"));
//     printf("%d\n", atoi("922337203685455775809")); 
//     printf("%d\n", ft_atoi("92233720-3556854775807")); 
//     printf("%d\n", atoi("92233720-3685554775807"));
// }

// int    len_n(int n)
// {
//     int    len;

//     len = 0;
//     if (n <= 0)
//         len = 1;
//     while (n != 0)     // n = 197728   len 6
//     {
//         n /= 10;
//         len++;
//     }
//     return (len);
// }
// char	check(int src){
// 	if (src > INT_MIN)
//         return (-1);
// 	else if(src > INT_MAX)
// 		return (0);
// 	else 
// 		return 0;
// }

// char    *ft_itoa(int n)
// {
//     char	*res;
//     int		len;
//     int		sign;

//     len = len_n(n);
//     sign = 0;
// 	//check(n);
//     res = (char *)malloc((len + 1) * sizeof(char));
//     if (n < 0)
//     {
//         sign = 1;
//         n = -n;
//         res[0] = '-';
//     }
//     if (!res)
//         return (free(res),NULL);
//     res[len] = '\0';
//     if (n == 0)
//         res[0] = '0';
//     while (n > 0)
//     {
//         res[--len] = (n % 10) + '0';
//         n /= 10;
//     }
//     return (res);
// }

// int main(){
// 	long long p = 9223372036854775809ULL;
// 	//printf("%lld\n", p);
// 	printf("%s", ft_itoa((int)p));
// 	return 0;
// }
