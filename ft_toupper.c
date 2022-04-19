/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:30:17 by cvazquez          #+#    #+#             */
/*   Updated: 2022/04/19 20:30:18 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strupcase(char *str)
{
	int		i;
	char	*cadena;

	cadena = str;
	i = 0;
	while (cadena[i] != '\0')
	{
		if (cadena[i] > 96 && cadena[i] < 123)
		{
			cadena[i] = cadena[i] + ('A' - 'a');
		}
		i++;
	}
	return (cadena);
}
