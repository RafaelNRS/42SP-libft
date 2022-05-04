/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_ft_isdigit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@42.student.42sp.org.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:32:06 by ranascim          #+#    #+#             */
/*   Updated: 2022/04/10 19:20:14 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_isdigit.c"
#include <stdio.h>

int main (void){
	char c1 = 'a';
	char c2 = '\t';
	char c3 = '\n';
	char c4 = 'F';
	char c5 = '0';

	if (ft_isdigit(c1))
		printf("%c is digit\n",c1);
	else
		printf("%c is not digit\n", c1);

	if (ft_isdigit(c2))
		printf("%c is digit\n",c2);
	else
		printf("%c is not digit\n", c2);

	if (ft_isdigit(c3))
		printf("%c is digit\n",c3);
	else
		printf("%c is not digit\n", c3);

	if (ft_isdigit(c4))
		printf("%c is digit\n",c4);
	else
		printf("%c is not digit\n", c4);

	if (ft_isdigit(c5))
		printf("%c is digit\n",c5);
	else
		printf("%c is not digit\n", c5);
}
