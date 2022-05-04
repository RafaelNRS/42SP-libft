/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@42.student.42sp.org.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 20:34:40 by ranascim          #+#    #+#             */
/*   Updated: 2022/04/30 20:42:24 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	n;

	i = 0;
	n = -1;
	while (s[i])
	{
		if (s[i] == (char)c)
			n = i;
		i++;
	}
	if (n >= 0)
		return ((char *)&s[n]);
	else
		return (NULL);
}
