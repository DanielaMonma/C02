/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 11:13:20 by danielpe          #+#    #+#             */
/*   Updated: 2024/09/04 15:35:03 by danielpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest [i] = '\0';
		i++;
	}
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	char	src[] = "Rosa no céu azul, te beijei os ombros";
	char 	dest1[18];
	char	dest2[13];
	char	dest3[50];

	ft_strncpy(dest1, src, 17);
	dest1[17] = '\0';

	ft_strncpy(dest2, src, 12);
        dest2[12] = '\0';

	ft_strncpy(dest3, src, 49);
	dest3[49] = '\0';

	printf("Estava escrito: %s\n", src);
	printf("Mas eu queria apenas: %s\n", dest1);
	printf("Porém poderia ser somente : %s\n", dest2);
	printf("E se for maior : %s\n", dest3);
}*/
