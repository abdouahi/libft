/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdouahi <abdouahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:19:47 by abdouahi          #+#    #+#             */
/*   Updated: 2024/10/30 16:04:10 by abdouahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *str, char c)
{
	int	word_count;
	int	inside_word;

	word_count = 0;
	inside_word = 0;
	while (*str)
	{
		if (*str != c && !inside_word)
		{
			inside_word = 1;
			word_count++;
		}
		else if (*str == c)
		{
			inside_word = 0;
		}
		str++;
	}
	return (word_count);
}

int	len_word(const char *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] != c)
			len++;
		i++;
	}
	return (len);
}

void	free_split(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	p = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	while (i < count_words(s, c))
	{
		while (s[j] == c)
			j++;
		p[i] = (char *)malloc((len_word(s + j, c) + 1) * sizeof(char));
		if (!p[i])
			return (NULL);
		k = 0;
		while (s[j] != c && s[j] != '\0')
			p[i][k++] = s[j++];
		p[i][k] = '\0';
		i++;
	}
	p[i] = NULL;
	return (p);
}

// int main(){
// 	int i = 0;
// 	char *p = "   swd    tre";
// 	char **str = ft_split(p, ' '); 
// 	while(str[i])
// 	{
// 		printf("%s\n", str[i]);
// 		i++;
// 	}
// 	free_split(str);
// 	return (0);
// }
