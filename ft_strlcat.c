/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:29:33 by cvazquez          #+#    #+#             */
/*   Updated: 2022/04/21 21:05:44 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size_dest)
{
	size_t	i;
	size_t	j;
	size_t	puntero;
	size_t	tam;
	size_t	tam_src;

	puntero = ft_strlen(dest);
	tam = ft_strlen(dest);
	tam_src = ft_strlen(src);
	i = 0;
	j = 0;
	while (src[j] != '\0')
	{
		while (dest[puntero] != '\0' && tam_src < (size_dest - tam - 1))
		{
			dest[puntero] = src[i];
			puntero++;
			i++;
		}
		j++;
	}
	dest[puntero] = '\0';
	return (tam + tam_src);
}
/*strlcat() appends string src to the end of dst.  It will append at most
     dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
     dstsize is 0 or the original dst string was longer than dstsize (in prac-
     tice this should not happen as it means that either dstsize is incorrect
     or that dst is not a proper string).

     If the src and dst strings overlap, the behavior is undefined.
     If the return value is >= dstsize, the output string has been truncated.
     It is the caller's responsibility to handle this.
     take the full size of the destination buffer and
     guarantee NUL-termination if there is room.  Note that room for the NUL
     should be included in dstsize.
     

if	(strlcat(pname, file, sizeof(pname)) >= sizeof(pname))
                   return(error);*/