/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ft_memcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@42.student.42sp.org.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:32:06 by ranascim          #+#    #+#             */
/*   Updated: 2022/04/10 22:07:16 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_memcpy.c"
#include <stdio.h>

int main (void){
	char c1[30] = "Meu Deus Que String Legal";
	char c2[30];
	
	printf("String1: %s\n", c1);
	printf("String2: %s\n", c2);
	ft_memcpy(c2, c1, 7);
	printf("String1: %s\n", c1);
	printf("String1: %s\n", c2);

}
