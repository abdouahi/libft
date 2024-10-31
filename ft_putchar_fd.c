/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdouahi <abdouahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:06:02 by abdouahi          #+#    #+#             */
/*   Updated: 2024/10/31 11:16:54 by abdouahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int main(){
// 	ft_putchar_fd('o', 0);
// 	printf("\n");
// 	ft_putchar_fd('o', 1);
// 	printf("\n");
// 	ft_putchar_fd('o', 2);
// }

// int	main(void) 
// { 
// 	int	fd; 
// 	fd = open("test.txt", O_WRONLY | O_TRUNC | O_CREAT, 0640); 
// 	if (fd == -1) 
// 		return (1); 
// 	printf("fd = %d\n", fd); 
// 	ft_putchar_fd('o', fd);
// 	close(fd);
// 	return (0); 
// } 