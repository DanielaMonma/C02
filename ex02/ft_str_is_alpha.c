/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 12:16:31 by danielpe          #+#    #+#             */
/*   Updated: 2024/09/03 16:59:39 by danielpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	test1[] = "Rosa no céu azul, te beijei os ombros";
	char	test2[] = "ocorrosa";
	char	test3[] = "Acoréro8a";
	char	test4[] = "123564";
	char	test5[] = "";

	printf("Test1 deve retornar 0, e o retorno foi: %d\n", ft_str_is_alpha(test1));
	printf("Test2 deve retornar 1, e o retorno foi: %d\n", ft_str_is_alpha(test2));
	printf("Test3 deve retornar 0, e o retorno foi: %d\n", ft_str_is_alpha(test3));
	printf("Test4 deve retornar 0, e o retorno foi: %d\n", ft_str_is_alpha(test4));
	printf("Test5 deve retornar 1, e o retorno foi: %d\n", ft_str_is_alpha(test5));
	
	return 0;
}*/
