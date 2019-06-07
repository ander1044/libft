/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anben <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 13:29:18 by anben             #+#    #+#             */
/*   Updated: 2019/06/07 14:26:20 by anben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*str;
	char		*dpos;
	const char	*spos;
	size_t		i;

	i = 0;
	dpos = dest;
	spos = src;
	str = (char *)ft_memalloc(sizeof(char) * len);
	if (spos == NULL && dpos == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = spos[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		dpos[i] = str[i];
		i++;
	}
	return (dest);
}
