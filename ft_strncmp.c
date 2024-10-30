/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdouahi <abdouahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:09:29 by abdouahi          #+#    #+#             */
/*   Updated: 2024/10/28 10:13:39 by abdouahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n - 1 && str1[i] == str2[i] && str1[i] && str2[i])
	{
		i++;
	}
	return (str1[i] - str2[i]);
}

// int main() 
// {  
//    char str_1[] = "javaq";  
//    char str_2[] = "javaq";      
//    if (ft_strncmp(str_1, str_2, strlen(str_2)) == 0) 
//    {
//       printf("The strings '%s' and '%s' are equal.\n", str_1, str_2);  
//    }
//    else 
//    {
//       printf("The strings '%s' and '%s' are not equal.\n", str_1, str_2);  
//    }
//    return 0;
// }  