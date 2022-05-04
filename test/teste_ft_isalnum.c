/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ft_isalnum.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@42.student.42sp.org.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:32:06 by ranascim          #+#    #+#             */
/*   Updated: 2022/04/10 19:06:01 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_isalnum.c"
#include <stdio.h>

int main (void){
	char c1 = 'a';
	char c2 = '\t';
	char c3 = '\n';
	char c4 = 'F';
	char c5 = '0';

	if (ft_isalnum(c1))
		printf("%c is alphanumeric\n",c1);
	else
		printf("%c is not alphanumeric\n", c1);

	if (ft_isalnum(c2))
		printf("%c is alphanumeric\n",c2);
	else
		printf("%c is not alphanumeric\n", c2);

	if (ft_isalnum(c3))
		printf("%c is alphanumeric\n",c3);
	else
		printf("%c is not alphanumeric\n", c3);


	if (ft_isalnum(c4))
		printf("%c is alphanumeric\n",c4);
	else
		printf("%c is not alphanumeric\n", c4);


	if (ft_isalnum(c5))
		printf("%c is alphanumeric\n",c5);
	else
		printf("%c is not alphanumeric\n", c5);

}
