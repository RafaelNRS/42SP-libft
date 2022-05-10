/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@42.student.42sp.org.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 09:34:39 by ranascim          #+#    #+#             */
/*   Updated: 2022/05/09 09:34:39 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putstr_fd(char *s, int fd)
{
    size_t  i;

    i = 0;
    while (s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
}
