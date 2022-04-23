/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:29:52 by cvazquez          #+#    #+#             */
/*   Updated: 2022/04/23 17:21:50 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;
	int		valor_retorno;

	i = 0;
	valor_retorno = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		valor_retorno = s1[i] - s2[i];
		if (valor_retorno != 0)
		{
			return (valor_retorno);
		}
		i++;
	}
	return (valor_retorno);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char			s1[] = "Hola Mundo";
	char			s2[] = "Hello World";
	size_t	n;
	int				res_orig;
	size_t	res_mifuncion;

	n = 5;
	res_orig = strncmp(s1, s2, n);
	printf("StrCmp original: ");
	printf("%d\n", res_orig);
	res_mifuncion = ft_strncmp(s1, s2, n);
	printf("Mi funcion: ");
	printf("%d\n", res_mifuncion);
	return (0);
}*/
