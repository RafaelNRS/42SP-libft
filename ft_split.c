/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@42.student.42sp.org.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 21:56:06 by ranascim          #+#    #+#             */
/*   Updated: 2022/05/04 11:49:26 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_word(const char *s, char c)
{
	size_t	count;
	size_t	i;
	int		word;

	count = 0;
	i = 0;
	word = 0;
	while(s[i])
	{
		if (s[i] == c)
			word = 0
		else if (s[i] != c && word == 0){
			word = 1;
			count++;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**str_arr;
	size_t	cw;

	cw = ft_count_word(s, c);
	str_arr = (char **) malloc((cw + 1) * sizeof(char *));
	if (!str_arr)
		return (NULL);
	
	int	i;
	int	word;
	int iwc;

	i = 0;
	word = -1;
	iwc = 0;
	
	while(s[i]){
		if (s[i] == c)
			word = -1;
		else if (word < 0)
			word = i;
		if (word >= 0 && (s[i + 1] == '\0' || s[i+1] == c))
		{
			str_arr[iwc] = (char *)malloc(sizeof(char) * (i - word + 2));
		}
		
		i++;
	}
}