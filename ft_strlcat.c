/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anben <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 12:47:31 by anben             #+#    #+#             */
/*   Updated: 2019/06/01 12:32:52 by anben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t dst_n;
	size_t src_n;

	i = 0;
	dst_n = (size_t)ft_strlen(const char *)dst;
	src_n = (size_t)ft_strlen(const char *)src;
	src = (const char *)src;
	while (src[i] && dst_n + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	if (i > dstsize)
		return (src_n + dstsize);
	return (src_n + i);
}
