/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:29:28 by cvazquez          #+#    #+#             */
/*   Updated: 2022/04/23 18:46:17 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
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
    int a = ft_isprint(" ");
    printf("%d", a);
	return(0);
}*/
