/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:29:23 by cvazquez          #+#    #+#             */
/*   Updated: 2022/04/23 18:45:17 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
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
    int a = ft_isdigit("777712313");
    printf("%d", a);
	return(0);
}*/
