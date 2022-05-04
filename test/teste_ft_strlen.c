/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ft_strlen.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@42.student.42sp.org.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:32:06 by ranascim          #+#    #+#             */
/*   Updated: 2022/04/10 20:41:07 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_strlen.c"
#include <stdio.h>

int main (void){
	char c1[] = "Meu Deus Que String Legal";
	printf("String: %s, Tamanho: %ld", c1, ft_strlen(c1));
}
