/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ft_memset.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@42.student.42sp.org.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:32:06 by ranascim          #+#    #+#             */
/*   Updated: 2022/04/10 21:09:31 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_memset.c"
#include <stdio.h>

int main (void){
	char c1[] = "Meu Deus Que String Legal";
	printf("String: %s\n", c1);
	ft_memset(c1, '$', 7);
	printf("String: %s\n", c1);
}
