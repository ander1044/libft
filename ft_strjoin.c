/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anben <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:04:31 by anben             #+#    #+#             */
/*   Updated: 2019/06/10 14:56:39 by anben            ###   ########.fr       */
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
	if (!s1 && !s2)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(*str) * (n + 1))))
		return (NULL);
	ft_strcpy(str, st1);
	ft_strcat(str, st2);
	return (str);
}
