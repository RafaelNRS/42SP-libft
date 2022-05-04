/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ft_isprint.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@42.student.42sp.org.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:32:06 by ranascim          #+#    #+#             */
/*   Updated: 2022/04/10 19:37:30 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_isprint.c"
#include <stdio.h>

int main (void){
	char c1 = 'a';
	char c2 = '\t';
	char c3 = '\n';
	char c4 = 'F';
	char c5 = '0';
	char c6 = 128;
	char c7 = 0;

	if (ft_isprint(c1))
		printf("%c is print\n",c1);
	else
		printf("%c is not print\n", c1);

	if (ft_isprint(c2))
		printf("%c is print\n",c2);
	else
		printf("%c is not print\n", c2);

	if (ft_isprint(c3))
		printf("%c is print\n",c3);
	else
		printf("%c is not print\n", c3);


	if (ft_isprint(c4))
		printf("%c is print\n",c4);
	else
		printf("%c is not print\n", c4);


	if (ft_isprint(c5))
		printf("%c is print\n",c5);
	else
		printf("%c is not print\n", c5);

	if (ft_isprint(c6))
		printf("%c is print\n",c6);
	else
		printf("%c is not print\n", c6);

	if (ft_isprint(c7))
		printf("%c is print\n",c7);
	else
		printf("%c is not print\n", c7);

}
