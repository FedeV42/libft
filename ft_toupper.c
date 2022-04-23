/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:30:17 by cvazquez          #+#    #+#             */
/*   Updated: 2022/04/23 17:56:30 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
	{
		c = c + ('A' - 'a');
	}
	return (c);
}
/*
int	main(void)
{
	int	a;
	int	j;

	a = 'h';
	j = ft_toupper(a);
	printf("%d\n", j);
	return (0);
}*/
