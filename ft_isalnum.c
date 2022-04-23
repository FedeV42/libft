/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:29:02 by cvazquez          #+#    #+#             */
/*   Updated: 2022/04/23 19:40:31 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c < '0' || c > '9')
		if (c < 'a' || c > 'z')
			if (c < 'A' || c > 'Z')
			{
				return (0);
			}
			else
			{
				return (1);
			}
}

/*
#include <stdio.h>
int	main(void)
{
    int a = ft_isalnum("777712313rewrrrereVCXVCXV");
    printf("%d", a);
    
}*/
