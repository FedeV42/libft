/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:30:12 by cvazquez          #+#    #+#             */
/*   Updated: 2022/04/19 20:30:13 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strlowcase(char *str)
{
	int		i;
	char	*cadena;

	i = 0;
	cadena = str;
	while (cadena[i] != '\0')
	{
		if (cadena[i] > 64 && cadena[i] < 91)
		{
			cadena[i] = cadena[i] + ('a' - 'A');
		}
		i++;
	}
	return (cadena);
}
