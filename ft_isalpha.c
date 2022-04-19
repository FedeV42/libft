/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:29:09 by cvazquez          #+#    #+#             */
/*   Updated: 2022/04/19 20:29:10 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_str_is_alpha(char *str)
{
	int		i;
	int		res;
	char	*cadena;

	cadena = str;
	i = 0;
	res = 0;
	while (cadena[i] != '\0')
	{
		if (cadena[i] > 'z' || cadena[i] < 'a')
		{
			if (cadena[i] > 'Z' || cadena[i] < 'A')
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}
