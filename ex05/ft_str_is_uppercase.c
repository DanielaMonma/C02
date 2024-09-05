/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:45:35 by danielpe          #+#    #+#             */
/*   Updated: 2024/09/03 18:48:47 by danielpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>

int	main(void)
{
	char	test1[] = "ALOREMIPSUM";
	char	test2[] = "AloreMipsum";
	char	test3[] = "123ALOREM";
	char	test4[] = "";

	printf ("Em ALOREMIPSUM temos apenas maiúsculas por isso retorna %d\n",
       		ft_str_is_uppercase(test1));
	printf ("Em AloreMipsum temos minúsculas e maiúsculas por isso retorna %d\n",
		ft_str_is_uppercase(test2));
	printf ("Em 123ALOREM temos minúsculas e números por isso retorna %d\n",
		ft_str_is_uppercase(test3));
	printf ("Em vazio temos apenas espaço vazio, por isso retorna  %d\n",
		ft_str_is_uppercase(test4));
	
	return 0;
}*/
