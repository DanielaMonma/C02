/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:18:41 by danielpe          #+#    #+#             */
/*   Updated: 2024/09/03 19:22:14 by danielpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] - ('A' - 'a');
		i++;
	}
	return (str);
}
/*#include <stdio.h>

int	main(void)
{
	char str[] = "DAnIELA";

	ft_strlowcase (str);
	printf ("Tudo minúsculo fica: %s\n", str);
}*/
