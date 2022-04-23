/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:30:12 by cvazquez          #+#    #+#             */
/*   Updated: 2022/04/23 18:05:52 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		c = c + ('a' - 'A');
	}
	return (c);
}
/*
int	main(void)
{
	int	a;
	int	j;

	a = 'J';
	j = ft_tolower(a);
	printf("%c\n", j);
	return (0);
}*/
