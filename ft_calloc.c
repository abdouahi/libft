/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdouahi <abdouahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:10:09 by abdouahi          #+#    #+#             */
/*   Updated: 2024/10/31 14:41:14 by abdouahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (count > 0 && size > 0 && count * size / size != count)
		return (NULL);
	p = malloc(count * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}

// int main(){
// 	char *p;

// 	p = ft_calloc(4, 4);
// 	if(p == NULL){
// 		printf("0");
// 		return 0;
// 	}
// 	for (size_t i = 0; i < 5; i++)
// 	{
// 		if(p[i] == '\0')
// 			printf("%c", 'a');
// 		else
// 			printf("%c", p[i]);
// 	}
// 	free(p); 
// 	// 2
// 	printf("\n");
// 	char *p2;

// 	p2 = ft_calloc(SIZE_MAX, 4);
// 	if(p2 == NULL){
// 		printf("0");
// 		return 0;
// 	}
// 	for (size_t i = 0; i < 5; i++)
// 	{
// 		if(p2[i] == '\0')
// 			printf("%c", 'a');
// 		else
// 			printf("%c", p2[i]);
// 	}
// 	free(p2); 
// }

// int main() {
//     size_t count = SIZE_MAX; // Maximum size_t value
//     size_t size = 2; // A small size to cause overflow

//     void *ptr = ft_calloc(count, size);

//     if (ptr == NULL) {
//         printf("Memory allocation failed (likely due to overflow)\n");
//     } else {
//         printf("Memory allocated successfully\n");
//         free(ptr);
//     }

//     return 0;
// }

// int main()
// {
//     size_t count = SIZE_MAX; // Maximum size_t value to cause overflow
//     size_t size = sizeof(int);

//     int *array = (int *)ft_calloc(count, size);
//     if (array == NULL ) {
//         printf("Memory allocation failed (likely due to overflow).\n");
//         return 1;
//     }

//     // Check the values are initialized to 0
//     for (size_t i = 0; i < 5; i++) {
//         printf("array[%zu] = %d\n", i, array[i]);
//     }

//     // Free allocated memory
//     free(array);
//     return 0;
// }

// int main(){
//     size_t count = 4;
//     unsigned long long size = 10000000000000000000ULL;
//     void *ptr1 = ft_calloc(count, size);
//     void *ptr2 = calloc(count, size);
//     printf("%p\n", ptr1);
//     printf("%p\n", ptr2);

//     free(ptr1);
//     free(ptr2);

//     return 0;
// }
