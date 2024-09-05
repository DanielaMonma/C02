/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 10:17:26 by danielpe          #+#    #+#             */
/*   Updated: 2024/09/04 11:14:30 by danielpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	alpha(char str)
{
	return ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'));
}

char	numeric(char str)
{
	return (str >= '0' && str <= '9');
}

char	alpha_numeric(char str)
{
	return (alpha(str) || numeric(str));
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = 1;
	ptr = str;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && j)
		{
			str[i] = str[i] - 32;
			j = 0;
		}		
		else if (str[i] >= 'A' && str[i] <= 'Z' && !j)
			str[i] = str[i] + 32;
		else if (!alpha_numeric (str[i]))
			j = 1;
		else
			j = 0;
		i++;
	}
	return (ptr);
}

/*#include <stdio.h>

int	main(void)
{
	char	str1[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	char	str2[] = "eSTa e uma fRaSe CoM vÁrias letras MaiÚsculas e MINÚSCULAs";
	char	str3[] = "123testando COM NUMEROS 45e palavras";

	printf ("Inicialmente era: %s\n", str1);
	printf ("capitalized: %s\n\n",ft_strcapitalize(str1));
	printf ("Inicialmente era: %s\n", str2);
	printf ("capitalized: %s\n\n",ft_strcapitalize(str2));
	printf ("Inicialmente era: %s\n", str3);
	printf ("capitalized: %s\n\n", ft_strcapitalize(str3));

	

}*/
