/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ft_isascii.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@42.student.42sp.org.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:32:06 by ranascim          #+#    #+#             */
/*   Updated: 2022/04/10 19:15:58 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_isascii.c"
#include <stdio.h>

int main (void){
	char c1 = 'a';
	char c2 = '\t';
	char c3 = '\n';
	char c4 = 'F';
	char c5 = '0';
	char c6 = 128;
	char c7 = 0;

	if (ft_isascii(c1))
		printf("%c is ascii\n",c1);
	else
		printf("%c is not ascii\n", c1);

	if (ft_isascii(c2))
		printf("%c is ascii\n",c2);
	else
		printf("%c is not ascii\n", c2);

	if (ft_isascii(c3))
		printf("%c is ascii\n",c3);
	else
		printf("%c is not ascii\n", c3);


	if (ft_isascii(c4))
		printf("%c is ascii\n",c4);
	else
		printf("%c is not ascii\n", c4);


	if (ft_isascii(c5))
		printf("%c is ascii\n",c5);
	else
		printf("%c is not ascii\n", c5);

	if (ft_isascii(c6))
		printf("%c is ascii\n",c6);
	else
		printf("%c is not ascii\n", c6);

	if (ft_isascii(c7))
		printf("%c is ascii\n",c7);
	else
		printf("%c is not ascii\n", c7);

}
