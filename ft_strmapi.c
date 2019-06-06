/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anben <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 10:20:31 by anben             #+#    #+#             */
/*   Updated: 2019/06/06 11:45:19 by anben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		n;
	int			i;
	char		*str;
	char		*st1;

	i = 0;
	st1 = (char *)s;
	str = (char *)ft_memalloc(sizeof(char) * (ft_strlen(st1)) + 1);
	if (str == NULL)
		return (NULL);
	if (str == NULL && st1 == NULL)
		return (NULL);
	n = ft_strlen(st1);
	while (st1[i])
	{
		str[i] = f(i, st1[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
