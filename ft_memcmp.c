/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 12:46:39 by cvazquez          #+#    #+#             */
/*   Updated: 2022/04/23 18:04:43 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	j;

	j = 0;
	while (j < n)
	{
		if (((unsigned char *)s1)[j] == ((unsigned char *)s2)[j])
		{
			j++;
		}
		else
		{
			return (((unsigned char *)s1)[j] - ((unsigned char *)s2)[j]);
		}
	}
	return (0);
}
