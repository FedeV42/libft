/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:29:09 by cvazquez          #+#    #+#             */
/*   Updated: 2022/04/23 18:49:09 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c > 'z' || c < 'a')
	{
		if (c > 'Z' || c < 'A')
		{
			return (0);
		}
	}
	return (1);
}

/*
#include <stdio.h>
int	main(void)
{
    int a = ft_isalpha("rewrrrereªVCXVCXV");
    printf("%d", a);
    
}*/
