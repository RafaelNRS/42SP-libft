/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ft_isalpha.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@42.student.42sp.org.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:32:06 by ranascim          #+#    #+#             */
/*   Updated: 2022/04/10 16:38:53 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_isalpha.c"
#include <stdio.h>

int main (void){
	char c1 = 'a';
	char c2 = '\t';
	char c3 = '\n';
	char c4 = 'F';
	char c5 = '0';

	if (ft_isalpha(c1))
		printf("%c is alpha\n",c1);
	else
		printf("%c is not alpha\n", c1);

	if (ft_isalpha(c2))
		printf("%c is alpha\n",c2);
	else
		printf("%c is not alpha\n", c2);

	if (ft_isalpha(c3))
		printf("%c is alpha\n",c3);
	else
		printf("%c is not alpha\n", c3);


	if (ft_isalpha(c4))
		printf("%c is alpha\n",c4);
	else
		printf("%c is not alpha\n", c4);


	if (ft_isalpha(c5))
		printf("%c is alpha\n",c5);
	else
		printf("%c is not alpha\n", c5);

}
