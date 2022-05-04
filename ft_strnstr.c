/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@42.student.42sp.org.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 20:59:07 by ranascim          #+#    #+#             */
/*   Updated: 2022/04/30 21:08:00 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	f;

	i = 0;
	f = 0;
	if (!*little)
		return ((char *) big);
	while (big[i] && i < len)
	{
		if (big[i] == little[f])
		{
			if (little[f + 1] == '\0')
				return ((char *) &str[i - f]);
			f++;
		}
		else
			f = 0;
		i++;
	}
	return (NULL);
}
