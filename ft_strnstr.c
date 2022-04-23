/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:30:03 by cvazquez          #+#    #+#             */
/*   Updated: 2022/04/23 19:28:26 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while ((str[i + j] == to_find[j] && str[i + j] != '\0') && i < len)
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char			str[50] = "Hello World";
	char			to_find[20] = "o";
	int 			len = 5;

	printf("Strstr original:\n");
	printf("%s\n", strnstr(str, to_find, len));
	printf("Mi funcion:\n");
	printf("%s\n", ft_strnstr(str, to_find, len));
	return (0);
}*/
