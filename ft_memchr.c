/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@42.student.42sp.org.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 20:45:39 by ranascim          #+#    #+#             */
/*   Updated: 2022/04/30 20:53:36 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char	*mem;
	int				i;

	mem = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (mem[i] == (unsigned char)c)
			return ((unsigned char *) &mem[i]);
		i++;
	}
	return (NULL);
}
