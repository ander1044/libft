/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anben <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 12:47:31 by anben             #+#    #+#             */
/*   Updated: 2019/06/06 13:53:45 by anben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_n;
	size_t	src_n;
	char	*src1;

	dst_n = 0;
	src_n = 0;
	src1 = (char *)src;
	if (src1 == NULL)
		return (dstsize + ft_strlen(src1));
	while (dst[dst_n] && dst_n < dstsize)
		dst++;
	while ((src[src_n]) && (dst_n + 1) < dstsize)
	{
		dst[dst_n + src_n] = src[src_n];
		src_n++;
	}
	if (dst_n != dstsize)
		dst[dst_n + src_n] = '\0';
	return (dst_n + ft_strlen(src1));
}
