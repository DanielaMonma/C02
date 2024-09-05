/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:16:45 by danielpe          #+#    #+#             */
/*   Updated: 2024/09/03 19:09:15 by danielpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	test1[] = "DANIELA";
	char	test2[] = "Daniela\t";
	char	test3[] = "";

	printf ("test1 is printable por isso retorna %d\n",
			ft_str_is_printable(test1));
	printf ("test2 is non-printable por isso retorna %d\n", 
			ft_str_is_printable(test2));
	printf ("test3 é vazio por isso retorna %d\n",
			ft_str_is_printable(test3));
}*/
