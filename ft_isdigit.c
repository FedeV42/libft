/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:29:23 by cvazquez          #+#    #+#             */
/*   Updated: 2022/04/19 20:29:24 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_str_is_numeric(char *str)
{
	int		i;
	char	*cadena;

	cadena = str;
	i = 0;
	while (cadena[i] != '\0')
	{
		if (cadena[i] < '0' || cadena[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
