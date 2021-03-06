/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:29:16 by cvazquez          #+#    #+#             */
/*   Updated: 2022/04/23 19:32:04 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
 #include <ctype.h>
 #include <stdio.h>
int	main(void)
{
    int a = ft_isascii("777712313rewrrrereVCXVCX16");
    printf("%d", a);
	return(0);
    
}*/
