/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anben <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:04:31 by anben             #+#    #+#             */
/*   Updated: 2019/06/07 12:34:36 by anben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		n;
	char	*str;
	char	*st1;
	char	*st2;

	st1 = (char *)s1;
	st2 = (char *)s2;
	n = ft_strlen(st1) + ft_strlen(st2);
	str = (char *)ft_memalloc(sizeof(*str) * (n + 1));
	if (str == NULL)
		return (NULL);
	ft_strcpy(str, st1);
	ft_strcat(str, st2);
	return (str);
}
