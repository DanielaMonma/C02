/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:01:01 by danielpe          #+#    #+#             */
/*   Updated: 2024/09/03 20:11:21 by danielpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	test1[] = "aloremipsum";
	char	test2[] = "loreMipsum";
	char	test3[] = "123lorem";
	char	test4[] = "";

	printf ("Em loremipsum temos apenas minúsculas por isso retorna %d\n",
       		ft_str_is_lowercase(test1));
	printf ("Em loreMipsum temos minúsculas e maiúsculas por isso retorna %d\n",
		ft_str_is_lowercase(test2));
	printf ("Em 123lorem temos minúsculas e números por isso retorna %d\n",
		ft_str_is_lowercase(test3));
	printf ("Em vazio temos apenas espaço vazio, por isso retorna  %d\n",
		ft_str_is_lowercase(test4));
	
	return 0;
}*/
