/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdouahi <abdouahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:39:54 by abdouahi          #+#    #+#             */
/*   Updated: 2024/10/25 14:26:10 by abdouahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}

// int main() {
//    char val1 = 's';
//    char val2 = '8';
//    char val3 = '$';
//    if(isalnum(val1))
//    printf("The character is alphanumeric");
//    else
//    printf("The character is not alphanumeric");
//    printf("\n");
//    if(isalnum(val2))
//    printf("The character is alphanumeric");
//    else
//    printf("The character is not alphanumeric");
//    printf("\n");
//    if(isalnum(val3))
//    printf("The character is alphanumeric");
//    else
//    printf("The character is not alphanumeric");
//    printf("\n");
//    return 0;
// }