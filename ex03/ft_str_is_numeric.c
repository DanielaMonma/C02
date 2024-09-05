/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:16:39 by danielpe          #+#    #+#             */
/*   Updated: 2024/09/03 17:06:16 by danielpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>

int	main(void)
{
	char	test1[] = "1,2,3,4";
	char	test2[] = "123456";
	char	test3[] = "a1d1528rA";
	char	test4[] = "";
	
	printf("Test1 deve retornar 0, e o retorno foi: %d\n", 
			ft_str_is_numeric(test1));
	printf("Test2 deve retornar 1, e o retorno foi: %d\n",
		       	ft_str_is_numeric(test2));
	printf("Test3 deve retornar 0, e o retorno foi: %d\n",
			ft_str_is_numeric(test3));
	printf("Test4 deve retornar 1, e o retorno foi: %d\n",
			ft_str_is_numeric(test4));

	return 0;
}*/
