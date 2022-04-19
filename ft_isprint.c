/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:29:28 by cvazquez          #+#    #+#             */
/*   Updated: 2022/04/19 20:29:29 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_str_is_printable(char *str)
{
	char	*cadena;
	int		i;

	cadena = str;
	i = 0;
	while (cadena[i] != '\0')
	{
		if (cadena[i] < 32 || cadena[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
